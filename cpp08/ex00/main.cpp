#include "easyfind.hpp"

int main()
{
    try {
        std::vector <int> vec;
        vec.push_back(42);
        vec.push_back(21);
        vec.push_back(69);
        std::vector<int>::iterator it =  easyfind(vec, 42);
        std::cout << *it << std::endl;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
}