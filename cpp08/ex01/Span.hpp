#ifndef SPAN_HPP
# define SPAN_HPP
#include <iostream>
#include <algorithm>
#include <vector>
#include <exception>
#include <iterator>

class Span {
    private:
        unsigned int N;
        std::vector<int> vec;

    public:
        Span();
        Span(unsigned int _N);
        Span(Span const &other);
        Span &operator=(Span const &copy);
        ~Span();

        void addNumber(int n);
        int shortestSpan();
        int longestSpan();
        template <typename T>
        void addRange(T begin, T end)
        {
            vec.insert(vec.end(), begin, end);
        }
};

#endif