#include <iostream>
using namespace std;

int fun1(int n)

{
    if(n>0)
    {
// (IT IS FIRST PRINTING THEN CALLING)
        cout<<n<<endl;
        fun1(n-1);
    }
}
int fun2(int n)

{
    if(n>0)
    {

// (IT IS FIRST CALLING THEN PRINTING)
        fun2(n-1);
        cout<<n<<endl;
    }
}

// STATIC AND GLOBAL VARIABLE

int fun3(int n)
{
    static int x = 0;
    if (n > 0)
    {
        x++;
        return fun3(n - 1) + x;
    }
    return 0;
}

int main()
{
    int a=5;
    fun1(a);
    fun2(a);
    cout <<fun3(a);
    return 0;
}
