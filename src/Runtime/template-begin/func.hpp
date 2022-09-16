#pragma once

#include <iostream>
template <class Func>
void call_twice(Func const& func)
{
    std::cout << func(0) << std::endl;
    std::cout << func(1) << std::endl;
    std::cout << "sizeof func : " << sizeof(func) << std::endl;
}

auto make_twice(int fac)
{
    return [&](int n) {
        return n * fac;
    };
}