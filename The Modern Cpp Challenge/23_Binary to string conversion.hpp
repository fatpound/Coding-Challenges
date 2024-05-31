#pragma once

#include <cstdint>

#include <iostream>
#include <vector>
#include <string>
#include <type_traits>

using namespace std::literals::string_literals;

namespace fatpound::coding_challenges::tmcc::q23
{
    template <class C, std::size_t ValueType_Size>
    concept RangedContainer = requires(C t)
    {
        { t.size()   };

        { t.begin()  };
        { t.end()    };
        { t.cbegin() };
        { t.cend()   };

        typename C::value_type;

        requires std::unsigned_integral<typename C::value_type>;

        requires sizeof(typename C::value_type) == ValueType_Size;
    };

    template <class C>
    concept RangedContainer_i8 = RangedContainer<C, 1>;

    template <RangedContainer_i8 C>
    auto Int8ToHexString(const C& container, const bool& uppercase = true) -> std::string
    {
        static constexpr auto uppercase_hexlist = "0123456789ABCDEF";
        static constexpr auto lowercase_hexlist = "0123456789abcdef";

        const auto& hexlist = (uppercase ? uppercase_hexlist : lowercase_hexlist);

        std::string result{};

        result.reserve(container.size());

        for (const auto& item : container)
        {
            const auto& a = (item / 16) % 16;
            const auto& b = item % 16;
        
            result += hexlist[a];
            result += hexlist[b];
        }

        return result;
    }
    
    void Run();
}