#ifndef EASYFIND_HPP
# define EASYFIND_HPP
#include <iostream>
#include <algorithm>
#include <vector>
#include <exception>

template <typename T>
typename T::iterator easyfind(T &container, int n)
{
    typename T::iterator start = container.begin();
    typename T::iterator end = container.end();
    typename T::iterator value = std::find(start, end, n);
    if (value == end)
        throw std::exception();
    return value;
}

#endif