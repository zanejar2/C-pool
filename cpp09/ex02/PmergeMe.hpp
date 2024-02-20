#ifndef PMERGEME_HPP
#define PMERGEME_HPP
#include <iostream>
#include <cctype>
#include <cstdlib>
#include <vector>
#include <deque>
#include <algorithm>
#include <sys/time.h>

class PmergeMe {
    private:
        std::vector<std::pair<unsigned int, unsigned int> > vec;
        std::deque<std::pair<unsigned int, unsigned int> > deq;
    public :
        PmergeMe(int ac, char **av);
        ~PmergeMe();
        PmergeMe(const PmergeMe &other);
        PmergeMe &operator=(const PmergeMe &other);
        void vectorSort(std::vector<std::pair<unsigned int, unsigned int> > vec);
        void dequeSort(std::deque<std::pair<unsigned int, unsigned int> > deq);


};

#endif