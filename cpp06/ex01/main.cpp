#include "Serializer.hpp"

int main()
{
    Data data;
    data.n = 13;
    uintptr_t raw = Serializer::serialize(&data);
    Data *ptr = Serializer::deserialize(raw);
    std::cout << ptr->n << std::endl;
    return 0;
}