#include <iostream>
using namespace std;
int mul(int x, int y)
{

    return x * y;
}
int add(int m, int n, int o)
{

    return m + n + o;
}

int main()
{
    int a = 10, b = 20, c = 1, d;
    d = add(a, b, c);
    cout << d;
    return d;
}