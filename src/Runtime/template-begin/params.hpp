#pragma once
#include "template-begin/params.hpp"
#include <iostream>
#include <string>
template<class T>
T two(T t)
{
    return t * 2;
}

template<class T = int>
T two()
{
    return 2;
}


std::string two(std::string t)
{
    return t + t;
}

template <int N = 1, class T>
void show_times(T t)
{
    for (int i = 0; i < N; i++) {
        std::cout << t << std::endl;
    }
}