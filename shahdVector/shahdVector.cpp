#include <bits/stdc++.h>
#include "implementation.h"
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

int main()
{
    shahdVector<int> s1;
}