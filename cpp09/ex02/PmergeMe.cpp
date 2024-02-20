#include "PmergeMe.hpp"

PmergeMe::PmergeMe(int ac, char **av) {
    for (int i = 1; i < ac; i += 2)
    {
        unsigned int first = std::atoi(av[i]);
        unsigned int second = (i + 1 < ac) ? std::atoi(av[i + 1]) : 0;
        vec.push_back(std::make_pair(first, second));
    }
    vectorSort(vec);
    
    std::deque<std::pair<unsigned int, unsigned int> > deq;
    for (int i = 1; i < ac; i += 2)
    {
        unsigned int first = std::atoi(av[i]);
        unsigned int second = (i + 1 < ac) ? std::atoi(av[i + 1]) : 0;
        deq.push_back(std::make_pair(first, second));
    }
    dequeSort(deq);
}

PmergeMe::~PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe &other) {
    *this = other;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &other) {
    (void)other;
    return *this;
}

void sortPairs(std::vector<std::pair<unsigned int, unsigned int> >  &vec)
{
    static size_t  i = 0;
    if(i  == vec.size())
        return ;
    if (vec[i].first > vec[i].second && vec[i].second != 0)
        std::swap(vec[i].first, vec[i].second);
    i++;
    sortPairs(vec);
}

void PmergeMe::vectorSort(std::vector<std::pair<unsigned int, unsigned int> > vec)
{
    struct timeval start, end;
    gettimeofday(&start, NULL);
    sortPairs(vec);
    std::vector<unsigned int> mainChain, pendElem, result;
    std::vector<std::pair<unsigned int, unsigned int> >::iterator it;
    for (it = vec.begin(); it != vec.end(); it++)
    {
        if (it->second != 0)
            mainChain.push_back(it->second);
        pendElem.push_back(it->first);
    }
    std::vector<unsigned int>::iterator it2;
    for (it2 = mainChain.begin(); it2 != mainChain.end(); it2++)
    {
        std::vector<unsigned int>::iterator pos = std::upper_bound(result.begin(), result.end(), *it2);
        result.insert(pos, *it2);
    }
    for (it2 = pendElem.begin(); it2 != pendElem.end(); it2++)
    {
        std::vector<unsigned int>::iterator pos = std::upper_bound(result.begin(), result.end(), *it2);
        result.insert(pos, *it2);
    }
    gettimeofday(&end, NULL);
    std::cout << "After: ";
    if (result.size() <= 6) {
        for (it2 = result.begin(); it2 != result.end(); it2++)
            std::cout << *it2 << " ";
    }
    else {
        for (int i = 0; i < 6; i++)
            std::cout << result[i] << " ";
        std::cout << "[...]";
    }
    std::cout << std::endl;
    std::cout << "Time to process a range of " << result.size() << " elements with std::vector: " << (end.tv_sec - start.tv_sec) * 1000000 + (end.tv_usec - start.tv_usec) << " microseconds" << std::endl;
}

void PmergeMe::dequeSort(std::deque<std::pair<unsigned int, unsigned int> > deq)
{
    struct timeval start, end;
    gettimeofday(&start, NULL);
    std::deque<std::pair<unsigned int, unsigned int> >::iterator it;
    for (it = deq.begin(); it != deq.end(); it++)
    {
        if (it->first > it->second && it->second != 0)
            std::swap(it->first, it->second);
    }
    std::deque<unsigned int> mainChain, pendElem, result;
    for (it = deq.begin(); it != deq.end(); it++)
    {
        if (it->second != 0)
            mainChain.push_back(it->second);
        pendElem.push_back(it->first);
    }
    std::deque<unsigned int>::iterator it2;
    for (it2 = mainChain.begin(); it2 != mainChain.end(); it2++)
    {
        std::deque<unsigned int>::iterator pos = std::upper_bound(result.begin(), result.end(), *it2);
        result.insert(pos, *it2);
    }
    for (it2 = pendElem.begin(); it2 != pendElem.end(); it2++)
    {
        std::deque<unsigned int>::iterator pos = std::upper_bound(result.begin(), result.end(), *it2);
        result.insert(pos, *it2);
    }
    gettimeofday(&end, NULL);
    std::cout << "Time to process a range of " << result.size() << " elements with std::deque : " << (end.tv_sec - start.tv_sec) * 1000000 + (end.tv_usec - start.tv_usec) << " microseconds" << std::endl;
}