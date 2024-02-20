#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
#include <iostream>
#include <algorithm>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T> {
    public :
        MutantStack() {};
        MutantStack(MutantStack const &other) : std::stack<T>(other) {};
        MutantStack &operator=(MutantStack const &other) {
            std::stack<T>::operator=(other);
            return *this;
        };
        ~MutantStack() {};

        typedef typename std::stack<T>::container_type::iterator iterator;
        typedef typename std::stack<T>::container_type::const_iterator const_iterator;

        iterator begin() { 
            return this->c.begin();
        };
        iterator end() { 
            return this->c.end(); 
        };
        const_iterator begin() const { 
            return this->c.begin(); 
        };
        const_iterator end() const {
            return this->c.end(); 
        };
        
};

#endif