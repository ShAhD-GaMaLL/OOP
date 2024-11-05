#ifndef IMPLEMENTATION_HPP
#define IMPLEMENTATION_HPP

#include <cstddef>

template <typename T>
class shahdVector
{
private:
    T *vector = nullptr;
    int size;
    int capacity;
    void expandCapacity();

public:
    shahdVector(int size = 0) : size(size)
    {
        if (size < 0)
            size = 1;
        capacity = size + 10;
        vector = new T[capacity]{};
    }

    ~shahdVector()
    {
        delete[] vector;
        vector = nullptr;
    }
};

#include "implementation.cpp"
#endif
