#include "Span.hpp"

Span::Span() : N(0) {}

Span::Span(unsigned int _N) : N(_N) {}

Span::Span(Span const &other) {
    *this = other;
}

Span &Span::operator=(Span const &copy) {
    N = copy.N;
    return *this;
}

Span::~Span() {}

void Span::addNumber(int n) {
    if (N == 0 || vec.size() >= N)
        throw std::exception();
    vec.push_back(n);
}

int Span::shortestSpan()
{
    if(vec.size() < 2)
        throw std::exception();
    std::sort(vec.begin(), vec.end());
    int min = vec[1] - vec[0];
    for (unsigned int i = 2; i < vec.size(); i++)
    {
        if (vec[i] - vec[i - 1] < min)
            min = vec[i] - vec[i - 1];
    }
    return min;
}

int Span::longestSpan()
{
    if(vec.size() < 2)
        throw std::exception();
    std::sort(vec.begin(), vec.end());
    int max = vec[vec.size() - 1] - vec[0];
    return max;
}