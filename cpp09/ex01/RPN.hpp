#ifndef RPN_HPP
#define RPN_HPP
#include <iostream>
#include <stack>

class RPN {
    private :
        std::stack<int> _stack;
    public : 
        RPN(char *str);
        ~RPN();
        RPN(RPN const &copy);
        RPN &operator=(RPN const &copy);
};

#endif