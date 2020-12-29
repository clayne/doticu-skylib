/*
    Copyright � 2020 r-neal-kelly, aka doticu
*/

#pragma once

#include <vector>

#include "doticu_skylib/enum.h"
#include "doticu_skylib/intrinsic.h"
#include "doticu_skylib/math.h"
#include "doticu_skylib/maybe.h"

namespace doticu_skylib {

    class s16_xy
    {
    public:
        s16 x; // 0
        s16 y; // 2
    };
    STATIC_ASSERT(sizeof(s16_xy) == 0x4);

    class s16_yx
    {
    public:
        s16 y; // 0
        s16 x; // 2

        s16_yx(s16 y, s16 x) : y(y), x(x) {}

        Bool_t operator==(const s16_yx& other) { return this->y == other.y && this->x == other.x; }
    };
    STATIC_ASSERT(sizeof(s16_yx) == 0x4);

    class s16_xyz
    {
    public:
        s16 x; // 0
        s16 y; // 2
        s16 z; // 4
    };
    STATIC_ASSERT(sizeof(s16_xyz) == 0x6);

    class s32_xy
    {
    public:
        s32 x; // 0
        s32 y; // 4

        explicit operator s16_yx() { return s16_yx(y, x); }
    };
    STATIC_ASSERT(sizeof(s32_xy) == 0x8);

    class f32_xy
    {
    public:
        Float_t x; // 0
        Float_t y; // 4
    };
    STATIC_ASSERT(sizeof(f32_xy) == 0x8);

    class f32_xyz
    {
    public:
        Float_t x; // 0
        Float_t y; // 4
        Float_t z; // 8
    };
    STATIC_ASSERT(sizeof(f32_xyz) == 0xC);

    template <typename Type_t, size_t static_capacity>
    class Stack_Array_t
    {
    public:
        const size_t    capacity    = static_capacity;
        size_t          count       = 0;
        Byte_t          bytes       [static_capacity * sizeof(Type_t)];

        Stack_Array_t()
        {
        }

        ~Stack_Array_t()
        {
            Clear();
        }

        Type_t* Entries()
        {
            return reinterpret_cast<Type_t*>(bytes);
        }

        void Push(Type_t& entry)
        {
            SKYLIB_ASSERT(count < capacity);
            Entries()[count] = entry;
            count += 1;
        }

        void Push(Type_t&& entry)
        {
            SKYLIB_ASSERT(count < capacity);
            Entries()[count] = std::move(entry);
            count += 1;
        }

        void Push(const Type_t&& entry)
        {
            SKYLIB_ASSERT(count < capacity);
            Entries()[count] = std::move(entry);
            count += 1;
        }

        Type_t&& Pop()
        {
            SKYLIB_ASSERT(count > 0);
            count -= 1;
            return std::move(Entries()[count]);
        }

        Type_t& operator[](size_t index)
        {
            SKYLIB_ASSERT(index < count);
            return Entries()[index];
        }

        Bool_t Has_Space()
        {
            return count < capacity;
        }

        void Clear()
        {
            for (Index_t idx = 0, end = count; idx < end; idx += 1) {
                Entries()[idx].~Type_t();
            }
            count = 0;
        }
    };
    STATIC_ASSERT(sizeof(Stack_Array_t<Byte_t, 64>) == 0x50);

    template <typename Type_t>
    class Type_Array_t
    {
    public:
        Type_t  count; // 0
        Type_t  head;

        Type_t At(Index_t index)
        {
            SKYLIB_ASSERT(index > -1 && index < count);
            return *(&head + index);
        }
    };

    template <typename Type_t>
    class Static_Array_t
    {
    public:
        Type_t* entries;    // 0
        u32     count;      // 8
        u32     pad_0C;     // C
    };
    STATIC_ASSERT(sizeof(Static_Array_t<void*>) == 0x10);

    template <typename Type_t>
    class Short_Array_t
    {
    public:
        virtual ~Short_Array_t();

        Type_t* entries;    // 08
        u16     capacity;   // 10
        u16     free_index; // 12
        u16     count;      // 14
        u16     grow_rate;  // 16
    };
    STATIC_ASSERT(sizeof(Short_Array_t<void*>) == 0x18);

    template <typename Type_t>
    class Dynamic_Array_t // tArray
    {
    public:
        Type_t* entries;    // 00
        u32     capacity;   // 08
        u32     pad_0C;     // 0C
        u32     count;      // 10
        u32     pad_14;     // 14

        some<Type_t*> At(u32 index) // this should be Point
        {
            SKYLIB_ASSERT(index < count);
            return entries + index;
        }
    };
    STATIC_ASSERT(sizeof(Dynamic_Array_t<void*>) == 0x18);

    class Buffer_Allocator_t
    {
    public:
        class Offset_e : public Enum_t<Word_t>
        {
        public:
            enum : Word_t
            {
                RESIZE = 0x00920360, // 53105
            };
            using Enum_t::Enum_t;
        };

    public:
        void* allocator;

        Bool_t Resize(u32 count);
    };

    template <typename Type_t>
    class Buffer_t :
        public Buffer_Allocator_t,
        public Dynamic_Array_t<Type_t>
    {
    public:
    };
    STATIC_ASSERT(sizeof(Buffer_t<int>) == 0x20);

    template <typename Type_t>
    using Array_t = Dynamic_Array_t<Type_t>;

    template <typename Type>
    class Vector_t : public std::vector<Type>
    {
    public:
        using std::vector<Type>::vector;

        Index_t Index_Of(const Type& item) const
        {
            for (Index_t idx = 0, end = size(); idx < end; idx += 1) {
                if (at(idx) == item) {
                    return idx;
                }
            }
            return -1;
        }

        template <typename TT>
        Index_t Index_Of(const TT& item) const
        {
            for (Index_t idx = 0, end = size(); idx < end; idx += 1) {
                if (at(idx) == item) {
                    return idx;
                }
            }
            return -1;
        }

        Bool_t Has(const Type& item) const
        {
            return Index_Of(item) > -1;
        }

        Index_t Index_Of(const Type& item, Bool_t(*is_same)(const Type&, const Type&))
        {
            for (Index_t idx = 0, end = size(); idx < end; idx += 1) {
                if (is_same(at(idx), item)) {
                    return idx;
                }
            }
            return -1;
        }

        void Sort(Int_t(*comparator)(Type* item_a, Type* item_b))
        {
            qsort(data(), size(), sizeof(Type), reinterpret_cast<int(*)(const void*, const void*)>(comparator));
        }

        void Sort(Int_t(*comparator)(Type* item_a, Type* item_b), size_t begin)
        {
            size_t end = size();
            if (begin >= end) {
                begin = end - 1;
            }
            qsort(data() + begin, end - begin, sizeof(Type), reinterpret_cast<int(*)(const void*, const void*)>(comparator));
        }
    };

    template <typename Type_t>
    class Double_List_t
    {
    public:
        class Node_t
        {
        public:
            Node_t* next;       // 00
            Node_t* previous;   // 08
            Type_t  value;      // 10
        };

    public:
        Node_t* head;   // 00
        Node_t* tail;   // 08
        u32     size;   // 10
        u32     pad_14; // 14
    };
    STATIC_ASSERT(sizeof(Double_List_t<void*>) == 0x18);

    template <typename ...Types>
    class Tuple_t
    {
    public:
    };

    template <typename A>
    class Tuple_t<A>
    {
    public:
        A first;
    };

    template <typename A, typename B>
    class Tuple_t<A, B>
    {
    public:
        A first;
        B second;
    };

    template <typename A, typename B, typename C>
    class Tuple_t<A, B, C>
    {
    public:
        A first;
        B second;
        C third;
    };

    template <typename A, typename B, typename C, typename D>
    class Tuple_t<A, B, C, D>
    {
    public:
        A first;
        B second;
        C third;
        D forth;
    };

    template <typename First_t, typename ...Types>
    class Tuple_Map_t
    {
    public:
        class Entry_t : public Tuple_t<First_t, Types...>
        {
        public:
            Entry_t* chain; // nullptr == not in map
        };

        u64         unk_00;         // 00
        u32         unk_08;         // 08
        u32         capacity;       // 0C
        u32         free_count;     // 10
        u32         free_idx;       // 14
        Entry_t*    end_of_chain;   // 18
        u64         unk_20;         // 20
        Entry_t*    entries;        // 28

        Entry_t* Entry(First_t first)
        {
            if (entries) {
                Index_t idx = CRC32_Hash_t::Hash(first) & (capacity - 1);
                Entry_t* entry = entries + idx;
                if (entry && entry->chain != nullptr) {
                    for (; entry != end_of_chain; entry = entry->chain) {
                        if (entry->first == first) {
                            return entry;
                        }
                    }
                    return nullptr;
                } else {
                    return nullptr;
                }
            } else {
                return nullptr;
            }
        }

        Bool_t Has(First_t first)
        {
            return Entry(first) != nullptr;
        }
    };
    STATIC_ASSERT(sizeof(Tuple_Map_t<Int_t>) == 0x30);

    template <typename Key_t>
    class Set_t : public Tuple_Map_t<Key_t>
    {
    public:
    };
    STATIC_ASSERT(sizeof(Set_t<Int_t>) == 0x30);

    template <typename Key_t, typename Value_t>
    class Hash_Map_t : public Tuple_Map_t<Key_t, Value_t>
    {
    public:
    };
    STATIC_ASSERT(sizeof(Hash_Map_t<Int_t, Int_t>) == 0x30);

}
