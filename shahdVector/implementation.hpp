#ifndef IMPLEMENTATION_HPP
#define IMPLEMENTATION_HPP
#include <bits/stdc++.h>
using namespace std;

template <typename T>
class shahdVector
{
private:
    T *vector = nullptr;
    int size;
    int capacity;
    void expandCapacity();

public:
    shahdVector();
    shahdVector(int size);

    ~shahdVector();

    int getSize() const;
    int getCapacity() const;

    void pushBack(const T &value);
    void popBack();
    template <typename f>
    friend istream &operator>>(istream &in, shahdVector<f> &v);
    template <typename f>
    friend ostream &operator<<(ostream &out, const shahdVector<f> &v);
    int &operator[](T num);
};

#include "implementation.cpp"
#endif