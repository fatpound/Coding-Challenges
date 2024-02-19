#pragma once

#include "TMCC.hpp"

#include <cassert>

#include <algorithm>
#include <ranges>
#include <vector>
#include <array>
#include <list>
#include <iterator>
#include <concepts>
#include <print>

namespace tmcc::q20
{
    template <class C, typename T>
    bool contains(const C& container, T const& value)
    {
        return std::ranges::find(container, value) != std::end(container);
    }

    template <class C, typename... T>
    bool contains_any(const C& container, T&&... value)
    {
        return (... || contains<C>(container, value));
    }

    template <class C, typename... T>
    bool contains_all(const C& container, T&&... value)
    {
        return (... && contains<C>(container, value));
    }

    template <class C, typename... T>
    bool contains_none(const C& container, T&&... value)
    {
        return ! contains_any<C>(container, std::forward<T>(value)...);
    }

    void RunTests()
    {
        std::vector<int> v{ 1, 2, 3, 4, 5, 6 };
        assert(contains_any(v, 0, 3, 30));

        std::array<int, 6> a{ { 1, 2, 3, 4, 5, 6 } };
        assert(contains_all(a, 1, 3, 5, 6));

        std::list<int> l{ 1, 2, 3, 4, 5, 6 };
        assert( ! contains_none(l, 0, 6));

        std::println("All tests' results are OK!");
    }
}
