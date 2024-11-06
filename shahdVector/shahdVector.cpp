#include <bits/stdc++.h>
#include "implementation.hpp"
using namespace std;
#include <cstddef>

int main()
{
    int n;
    cout << "Enter the number of elemnts: ";
    cin >> n;
    shahdVector<int> s1(n);

    cin >> s1;
    cout << "The size now is: " << s1.getSize() << ", while the capacity is: " << s1.getCapacity() << endl;

    s1[3] = 40;

    for (int i = 0; i < 11; i++)
        s1.pushBack(i);

    cout << s1;
    cout << "The size now is: " << s1.getSize() << ", while the capacity is: " << s1.getCapacity() << endl;
}