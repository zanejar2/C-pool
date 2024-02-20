#include "Span.hpp"

int main()
{
    try {

        Span sp = Span(5);
        sp.addNumber(5);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;

        // Span sp = Span(5);
        // std::vector<int> v;
        // v.push_back(5);
        // v.push_back(3);
        // v.push_back(17);
        // v.push_back(9); 
        // v.push_back(11);
        // sp.addRange(v.begin(), v.end());
        // std::cout << sp.shortestSpan() << std::endl;
        // std::cout << sp.longestSpan() << std::endl;

        // Span sp = Span(10000);
        // std::vector<int> v;
        // for (int i = 0; i < 10000; i++)
        //     v.push_back(i);
        // sp.addRange(v.begin(), v.end());
        // std::cout << sp.shortestSpan() << std::endl;
        // std::cout << sp.longestSpan() << std::endl;

    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
}