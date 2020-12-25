/*
    Copyright � 2020 r-neal-kelly, aka doticu
*/

#pragma once

#include "doticu_skylib/collections.h"
#include "doticu_skylib/string.h"

#include "doticu_skylib/script_type.h"

#include "doticu_skylib/virtual.h"
#include "doticu_skylib/virtual_type.h"

namespace doticu_skylib {

    class Actor_t;
    class Alias_Base_t;
    class Faction_t;
    class Form_t;
    class Misc_t;
    class Object_t;
    class Outfit_t;
    class Reference_t;
    class Quest_t;

}

namespace doticu_skylib { namespace Virtual {

    class Array_t;

    union Variable_u
    {
        void*       ptr;
        Bool_t      b;
        Int_t       i;
        Float_t     f;
        String_t    str;
        Object_t*   obj;
        Array_t*    arr;

        Variable_u();
    };

    class Variable_t {
    public:
        class Offset_e : public Enum_t<Word_t>
        {
        public:
            enum : _TYPE_
            {
                COPY    = 0x01236E50, // 97509
                DESTROY = 0x01236D10, // 97508
            };
            using Enum_t::Enum_t;
        };

    public:
        Type_e      type;
        Variable_u  data;

        Variable_t();
        Variable_t(const Variable_t& other);
        Variable_t& operator=(const Variable_t& other);
        ~Variable_t();

        void Destroy();
        void Copy(const Variable_t& other);

    public:
        Bool_t  Is_None();
        Bool_t  Is_Bool();
        Bool_t  Is_Int();
        Bool_t  Is_Float();
        Bool_t  Is_String();
        Bool_t  Is_Object();
        Bool_t  Is_Array();
        Bool_t  Is_None_Array();
        Bool_t  Is_Bool_Array();
        Bool_t  Is_Int_Array();
        Bool_t  Is_Float_Array();
        Bool_t  Is_String_Array();
        Bool_t  Is_Object_Array();

    public:
        Object_t*               Object();
        Array_t*                Array();
        maybe<Script_Type_e>    Script_Type();

    public:
        template <typename Boolable_t, enable_if_virtual_bool_t<Boolable_t> = true>
        Boolable_t      Unpack();
        template <typename Intable_t, enable_if_virtual_int_t<Intable_t> = true>
        Intable_t       Unpack();
        template <typename Floatable_t, enable_if_virtual_float_t<Floatable_t> = true>
        Floatable_t     Unpack();
        template <typename Stringable_t, enable_if_virtual_string_t<Stringable_t> = true>
        Stringable_t    Unpack();
        template <typename Scriptable_t, enable_if_virtual_script_t<Scriptable_t> = true>
        Scriptable_t    Unpack();
        template <typename Arrayable_t, enable_if_arrayable_t<Arrayable_t> = true>
        Arrayable_t     Unpack();

        template <typename Boolable_t, enable_if_virtual_bool_t<Boolable_t> = true>
        void            Unpack(Boolable_t& result);
        template <typename Intable_t, enable_if_virtual_int_t<Intable_t> = true>
        void            Unpack(Intable_t& result);
        template <typename Floatable_t, enable_if_virtual_float_t<Floatable_t> = true>
        void            Unpack(Floatable_t& result);
        template <typename Stringable_t, enable_if_virtual_string_t<Stringable_t> = true>
        void            Unpack(Stringable_t& result);
        template <typename Scriptable_t, enable_if_virtual_script_t<Scriptable_t> = true>
        void            Unpack(Scriptable_t& result);
        template <typename Arrayable_t, enable_if_arrayable_t<Arrayable_t> = true>
        void            Unpack(Arrayable_t& results);

        template <typename Voidable_t, enable_if_void_t<Voidable_t> = true>
        void            Pack(Voidable_t);
        template <typename Boolable_t, enable_if_virtual_bool_t<Boolable_t> = true>
        void            Pack(const Boolable_t& value);
        template <typename Intable_t, enable_if_virtual_int_t<Intable_t> = true>
        void            Pack(const Intable_t& value);
        template <typename Floatable_t, enable_if_virtual_float_t<Floatable_t> = true>
        void            Pack(const Floatable_t& value);
        template <typename Stringable_t, enable_if_virtual_string_t<Stringable_t> = true>
        void            Pack(const Stringable_t& value);
        template <typename Scriptable_t, enable_if_virtual_script_t<Scriptable_t> = true>
        void            Pack(const Scriptable_t& value);
        template <typename Arrayable_t, enable_if_arrayable_t<Arrayable_t> = true>
        void            Pack(const Arrayable_t& values);

    public:
        Bool_t                  Bool();
        void                    Bool(const Bool_t value);
        Int_t                   Int();
        void                    Int(const Int_t value);
        Float_t                 Float();
        void                    Float(const Float_t value);
        String_t                String();
        void                    String(const String_t value);
        template <typename Scriptable_t>
        Scriptable_t            Scriptable();
        template <typename Scriptable_t>
        void                    Scriptable(const Scriptable_t value);
        template <typename Scriptable_t>
        Vector_t<Scriptable_t>  Scriptables();
        template <typename Scriptable_t>
        void                    Scriptables(const Vector_t<Scriptable_t>& values);
    };
    STATIC_ASSERT(sizeof(Variable_t) == 0x10);

    class Bool_Variable_t : public Variable_t
    {
    public:
        Bool_t  Value();
        void    Value(Bool_t value);
    };
    STATIC_ASSERT(sizeof(Bool_Variable_t) == 0x10);

    class Int_Variable_t : public Variable_t
    {
    public:
        Int_t   Value();
        void    Value(Int_t value);
    };
    STATIC_ASSERT(sizeof(Int_Variable_t) == 0x10);

    class Float_Variable_t : public Variable_t
    {
    public:
        Float_t Value();
        void    Value(Float_t value);
    };
    STATIC_ASSERT(sizeof(Int_Variable_t) == 0x10);

    class String_Variable_t : public Variable_t
    {
    public:
        String_t    Value();
        void        Value(String_t value);
    };
    STATIC_ASSERT(sizeof(String_Variable_t) == 0x10);

    template <typename T>
    class Array_Variable_t : public Variable_t
    {
    public:
        Array_t*    Value();
        void        Values(doticu_skylib::Vector_t<T>& values);
        void        Values(doticu_skylib::Vector_t<T>&& values);
    };
    STATIC_ASSERT(sizeof(Array_Variable_t<Int_t>) == 0x10);

}}

#include "doticu_skylib/virtual_array.h"
#include "doticu_skylib/virtual_class.h"
#include "doticu_skylib/virtual_handle.h"
#include "doticu_skylib/virtual_object.h"
#include "doticu_skylib/virtual_variable.h"

namespace doticu_skylib { namespace Virtual {

    template <typename Boolable_t, enable_if_virtual_bool_t<Boolable_t>>
    inline Boolable_t Variable_t::Unpack()
    {
        if (type.Is_Bool()) {
            return data.b;
        } else {
            return false;
        }
    }

    template <typename Intable_t, enable_if_virtual_int_t<Intable_t>>
    inline Intable_t Variable_t::Unpack()
    {
        if (type.Is_Int()) {
            return data.i;
        } else {
            return 0;
        }
    }

    template <typename Floatable_t, enable_if_virtual_float_t<Floatable_t>>
    inline Floatable_t Variable_t::Unpack()
    {
        if (type.Is_Float()) {
            return data.f;
        } else {
            return 0.0;
        }
    }

    template <typename Stringable_t, enable_if_virtual_string_t<Stringable_t>>
    inline Stringable_t Variable_t::Unpack()
    {
        if (type.Is_String()) {
            return data.str;
        } else {
            return "";
        }
    }

    template <typename Scriptable_t, enable_if_virtual_script_t<Scriptable_t>>
    inline Scriptable_t Variable_t::Unpack()
    {
        if (type.Is_Object()) {
            if (data.obj) {
                maybe<Script_Type_e> script_type = Script_Type();
                if (script_type) {
                    Handle_Policy_t* handle_policy = Machine_t::Self()->Handle_Policy();
                    if (handle_policy) {
                        return static_cast<Scriptable_t>
                            (handle_policy->Resolve(script_type, data.obj->Handle()));
                    } else {
                        return nullptr;
                    }
                } else {
                    return nullptr;
                }
            } else {
                return nullptr;
            }
        } else {
            return nullptr;
        }
    }

    template <typename Arrayable_t, enable_if_arrayable_t<Arrayable_t>>
    inline Arrayable_t Variable_t::Unpack()
    {
        Arrayable_t results;
        Unpack(results);
        return results;
    }

    template <typename Boolable_t, enable_if_virtual_bool_t<Boolable_t>>
    inline void Variable_t::Unpack(Boolable_t& result)
    {
        result = Unpack<Boolable_t>();
    }

    template <typename Intable_t, enable_if_virtual_int_t<Intable_t>>
    inline void Variable_t::Unpack(Intable_t& result)
    {
        result = Unpack<Intable_t>();
    }

    template <typename Floatable_t, enable_if_virtual_float_t<Floatable_t>>
    inline void Variable_t::Unpack(Floatable_t& result)
    {
        result = Unpack<Floatable_t>();
    }

    template <typename Stringable_t, enable_if_virtual_string_t<Stringable_t>>
    inline void Variable_t::Unpack(Stringable_t& result)
    {
        result = Unpack<Stringable_t>();
    }

    template <typename Scriptable_t, enable_if_virtual_script_t<Scriptable_t>>
    inline void Variable_t::Unpack(Scriptable_t& result)
    {
        result = Unpack<Scriptable_t>();
    }

    template <typename Arrayable_t, enable_if_arrayable_t<Arrayable_t>>
    inline void Variable_t::Unpack(Arrayable_t& results)
    {
        Array_t* varray = Array();
        if (varray) {
            return varray->Unpack<Arrayable_t>(results);
        }
    }

    template <typename Voidable_t, enable_if_void_t<Voidable_t>>
    inline void Variable_t::Pack(Voidable_t)
    {
        Destroy();
        this->type = Type_e::NONE;
        this->data.ptr = nullptr;
    }

    template <typename Boolable_t, enable_if_virtual_bool_t<Boolable_t>>
    inline void Variable_t::Pack(const Boolable_t& value)
    {
        Destroy();
        type = Type_e::BOOL;
        data.b = value;
    }

    template <typename Intable_t, enable_if_virtual_int_t<Intable_t>>
    inline void Variable_t::Pack(const Intable_t& value)
    {
        Destroy();
        type = Type_e::INT;
        data.i = value;
    }

    template <typename Floatable_t, enable_if_virtual_float_t<Floatable_t>>
    inline void Variable_t::Pack(const Floatable_t& value)
    {
        Destroy();
        type = Type_e::FLOAT;
        data.f = value;
    }

    template <typename Stringable_t, enable_if_virtual_string_t<Stringable_t>>
    inline void Variable_t::Pack(const Stringable_t& value)
    {
        Destroy();
        type = Type_e::STRING;
        data.str.Value(value.data);
    }

    template <typename Scriptable_t, enable_if_virtual_script_t<Scriptable_t>>
    inline void Variable_t::Pack(const Scriptable_t& value)
    {
        Destroy();

        Script_Type_e script_type = Script_Type_e::From<Scriptable_t>();
        if (script_type) {
            type = script_type;
            if (value) {
                Object_t* object = Object_t::Find_Or_Create(value, false);
                if (object) {
                    data.obj = object;
                }
            }
        }
    }

    template <typename Arrayable_t, enable_if_arrayable_t<Arrayable_t>>
    inline void Variable_t::Pack(const Arrayable_t& values)
    {
        Destroy();

        size_t value_count = values.size();
        if (value_count > 0) {
            Array_t* varray = nullptr;
            if (Machine_t::Self()->Create_Array(this->type.mangled, value_count, varray) && varray) {
                varray->Pack(values);
                type = Type_e::From<Arrayable_t>();
                data.arr = varray;
            }
        }
    }

    inline Bool_t                   Variable_t::Bool()                                              { return Unpack<Bool_t>(); }
    inline void                     Variable_t::Bool(const Bool_t value)                            { Pack<Bool_t>(value); }
    inline Int_t                    Variable_t::Int()                                               { return Unpack<Int_t>(); }
    inline void                     Variable_t::Int(const Int_t value)                              { Pack<Int_t>(value); }
    inline Float_t                  Variable_t::Float()                                             { return Unpack<Float_t>(); }
    inline void                     Variable_t::Float(const Float_t value)                          { Pack<Float_t>(value); }
    inline String_t                 Variable_t::String()                                            { return Unpack<String_t>(); }
    inline void                     Variable_t::String(const String_t value)                        { Pack<String_t>(value); }
    template <typename Scriptable_t>
    inline Scriptable_t             Variable_t::Scriptable()                                        { return Unpack<Scriptable_t>(); }
    template <typename Scriptable_t>
    inline void                     Variable_t::Scriptable(const Scriptable_t value)                { Pack<Scriptable_t>(value); }
    template <typename Scriptable_t>
    inline Vector_t<Scriptable_t>   Variable_t::Scriptables()                                       { return Unpack<Vector_t<Scriptable_t>>(); }
    template <typename Scriptable_t>
    inline void                     Variable_t::Scriptables(const Vector_t<Scriptable_t>& values)   { Pack<Vector_t<Scriptable_t>>(values); }

    template <typename T>
    inline Array_t* Array_Variable_t<T>::Value()
    {
        return Array();
    }

    template <typename T>
    inline void Array_Variable_t<T>::Values(Vector_t<T>& values)
    {
        Pack<Vector_t<T>>(values);
    }

    template <typename T>
    inline void Array_Variable_t<T>::Values(Vector_t<T>&& values)
    {
        Pack<Vector_t<T>>(values);
    }

}}
