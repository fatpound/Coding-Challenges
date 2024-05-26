#pragma once

#include "TMCC.hpp"

#include <concepts>

namespace tmcc::q19
{
    template <class C, typename T>
    concept Extensible = requires(C c, T t)
    {
        c.push_back(t);
    };

    template <typename E, typename... T>
    void PushBack(E& container, T&&... values) requires Extensible<E, T...>
    {
        (container.push_back(values), ...);
    }
}
