#include <bits/stdc++.h>
#include "implementation.hpp"
#include <cstddef>
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

// problem with default parameter
template <typename T>
shahdVector<T>::shahdVector(){};

template <typename T>
shahdVector<T>::shahdVector(int size) : size(size)
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

template <typename T>
void shahdVector<T>::popBack()
{
    if (size > 0)
        size--;
    else
        cerr << "Vector is already empty \n";
}

// new template for friend functions
template <typename f>
istream &operator>>(istream &in, shahdVector<f> &v)
{
    // cin.operator>>(v) so we need object as parameter to access the size member in this parameter (v)
    for (int i = 0; i < v.size; i++)
        in >> v.vector[i];
    return in;
}

template <typename f>
ostream &operator<<(ostream &out, const shahdVector<f> &v) // const as we don't want any modification by wrong in this one
{

    for (int i = 0; i < v.size; i++)
        out << v.vector[i] << " ";
    return out;
}
