#pragma once
#include "template-begin/params.hpp"
#include <string>
template<class T>
T two(T t)
{
    return t * 2;
}

std::string two(std::string t)
{
    return t + t;
}