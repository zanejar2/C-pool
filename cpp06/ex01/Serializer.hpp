#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP
#include <iostream>

struct Data {
    int n;
};

class  Serializer{
    private:
        Serializer();
    
    public:
        ~Serializer();
        Serializer(Serializer const &other);
        Serializer &operator=(Serializer const &other);        
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);

};

#endif