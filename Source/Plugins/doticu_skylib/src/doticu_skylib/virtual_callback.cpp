/*
    Copyright � 2020 r-neal-kelly, aka doticu
*/

#include "doticu_skylib/main.h"
#include "doticu_skylib/math.h"
#include "doticu_skylib/memory.h"
#include "doticu_skylib/virtual_callback.h"

namespace doticu_skylib { namespace Virtual {

    u64                                 Callback_i::callback_count = 0;
    std::mutex                          Callback_i::callback_count_lock;
    std::timed_mutex                    Callback_i::active_callbacks_lock;
    std::unique_lock<std::timed_mutex>  Callback_i::active_callbacks_locker(active_callbacks_lock, std::defer_lock);

    void* Callback_i::operator new(size_t byte_count)
    {
        maybe<Byte_t*> data = Memory_t::Self()->Allocate(byte_count);
        SKYLIB_ASSERT(data);
        return data();
    }

    void Callback_i::operator delete(void* data)
    {
        SKYLIB_ASSERT(data);
        Memory_t::Self()->Deallocate(static_cast<Byte_t*>(data));
    }

    Callback_i::Callback_i(Bool_t do_wait_to_finish) :
        do_wait_to_finish(do_wait_to_finish), pad_0D(0), pad_0E(0)
    {
        if (this->do_wait_to_finish) {
            std::lock_guard<std::mutex> locker(this->callback_count_lock);

            if (this->callback_count < std::numeric_limits<u64>::max()) {
                this->callback_count += 1;
            }

            if (!this->active_callbacks_locker.owns_lock()) {
                this->active_callbacks_locker.lock();
            }
        }
    }

    Callback_i::~Callback_i()
    {
        if (this->do_wait_to_finish) {
            std::lock_guard<std::mutex> locker(this->callback_count_lock);

            if (this->callback_count > 0) {
                this->callback_count -= 1;
            }

            if (this->callback_count == 0 && this->active_callbacks_locker.owns_lock()) {
                this->active_callbacks_locker.unlock();
            }
        }

        this->pad_0D = 0;
        this->pad_0E = 0;
    }

}}
