#include <bits/stdc++.h>
#include "implementation.hpp"
using namespace std;

template <typename T>
void shahdVector<T>::expandCapacity()
{
    capacity = (capacity == 0) ? 1 : capacity * 2;

    T *vector2 = new T[capacity]{};
    for (int i = 0; i < size; i++)
        vector2[i] = vector[i];

    swap(vector, vector2);
    delete[] vector2;

    /*  int newCapacity = capacity * 2;
        T *vector2 = new T[newCapacity]{};
        for(int i = 0; i < size; i++)
            vector2[i] = vector[i];

        delete [] vector;
        vector = vector2;
        capacity = newCapacity;
    */
}
template <typename T>
shahdVector<T>::shahdVector(int size = 0) : size(size)
{
    if (size < 0)
        size = 1;
    capacity = size + 10;
    vector = new T[capacity]{};
}

template <typename T>
shahdVector<T>::shahdVector(int size = 0) : size(size)
{
    if (size < 0)
        size = 1;
    capacity = size + 10;
    vector = new T[capacity]{};
}

template <typename T>
shahdVector<T>::~shahdVector()
{
    delete[] vector;
    vector = nullptr;
}

template <typename T>
void shahdVector<T>::pushBack(const T &value)
{
    if (size == capacity)
        expandCapacity();

    vector[size++] = value;
}