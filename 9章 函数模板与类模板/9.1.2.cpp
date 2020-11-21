// program 9.1.2.cpp Swap 函数模板
#include <iostream>
using namespace std;

template <class T>
void Swap(T& x, T& y)
{
    T tmp = x;
    x = y;
    y = tmp;
}

int main()
{
    int n = 1, m = 2;
    Swap(n,m);
    double f = 1.2, g = 2.3;
    Swap(f,g);
    return 0;
}
