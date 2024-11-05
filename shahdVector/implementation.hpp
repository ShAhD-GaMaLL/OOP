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
    shahdVector(int size = 0) : size(size);

    ~shahdVector();

    void pushBack(const T &value);
};

#include "implementation.cpp"
#endif
