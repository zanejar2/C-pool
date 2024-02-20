#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
    private:
        T *array;
        unsigned int length;
    public:
        Array()
        {
            this->array = new T[0];
            this->length = 0;
        
        }
        Array(unsigned int n)
        {
            this->array = new T[n];
            this->length = n;
        }
        Array(Array const & other)
        {
            this->array = new T[other.length];
            this->length = other.length;
            for (unsigned int i = 0; i < other.length; i++)
                this->array[i] = other.array[i];
        }
        Array & operator=(Array const & copy)
        {
            if (this != &copy)
            {
                delete[] this->array;
                this->array = new T[copy.length];
                this->length = copy.length;
                for (unsigned int i = 0; i < copy.length; i++)
                    this->array[i] = copy.array[i];
            }
            return (*this);
        }
        ~Array()
        {
            delete[] this->array;
        }
        T & operator[](unsigned int i)
        {
            if (i >= this->length)
                throw std::exception();
            return (this->array[i]);
        }
        unsigned int size() const
        {
            return (this->length);
        }
};

#endif