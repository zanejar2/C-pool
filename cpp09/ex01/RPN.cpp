#include "RPN.hpp"

RPN::RPN(char *str) {
    for (int i = 0; str[i]; i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
            _stack.push(str[i] - '0');
        else if (str[i] == '+' && _stack.size() >= 2)
        {
            int b = _stack.top();
            _stack.pop();
            int a = _stack.top();
            _stack.pop();
            _stack.push(a + b);
        }
        else if (str[i] == '-' && _stack.size() >= 2)
        {
            int b = _stack.top();
            _stack.pop();
            int a = _stack.top();
            _stack.pop();
            _stack.push(a - b);
        }
        else if (str[i] == '*' && _stack.size() >= 2)
        {
            int b = _stack.top();
            _stack.pop();
            int a = _stack.top();
            _stack.pop();
            _stack.push(a * b);
        }
        else if (str[i] == '/' && _stack.size() >= 2)
        {
            int b = _stack.top();
            if (b == 0)
            {
                std::cerr << "Error: Division by zero!" << std::endl;
                return ;
            }
            _stack.pop();
            int a = _stack.top();
            _stack.pop();
            _stack.push(a / b);
        }
        else if (str[i] == ' ')
            continue;
        else
        {
            std::cerr << "Error: Invalid character!" << std::endl;
            return ;
        }
    }
    if (_stack.size() != 1)
    {
        std::cerr << "Error: Invalid expression!" << std::endl;
        return ;
    }
    std::cout << _stack.top() << std::endl;
}

RPN::~RPN() {}

RPN::RPN(RPN const &copy) {
    *this = copy;
}

RPN &RPN::operator=(RPN const &copy) {
        this->_stack = copy._stack;
    return *this;
}
