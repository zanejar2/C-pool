#include "PmergeMe.hpp"

void checkInput(int ac, char **av) 
{
    for (int i = 1; i < ac; i++) {
        for (int j = 0; av[i][j] != '\0'; j++) {
            if (!std::isdigit(av[i][j]) && av[i][0] != '+') {
                std::cout << "Error: Wrong input : " << av[i] << std::endl;
                exit(0);
            }
        }
    }
}

int main (int ac, char **av)
{
    if (ac < 3)
    {
        std::cout << "Not enough elements to sort!" << std::endl;
        return (0);
    }
    checkInput(ac, av);
    std::cout << "Before: ";
    if (ac <= 6) {
        for (int i = 1; i < ac; i++)
            std::cout << av[i] << " ";
    }
    else {
        for (int i = 1; i < 6; i++)
            std::cout << av[i] << " ";
        std::cout << "[...]";
    }
    std::cout << std::endl;
    PmergeMe(ac, av);
    return (0);
}