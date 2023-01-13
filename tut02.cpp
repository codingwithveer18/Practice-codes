#include <iostream>
using namespace std;
int main()
{

    // FIND MAXIMUM No. IN ARRAY
    int max, n;
    cout << "ENTER Number of elements in array" << endl;
    cin >> n;
    int A[n];
    cout << "ENTER Elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    max = A[0];
    for (int i = 0; i < n; i++)
    {
        if (A[i] > max)
            max = A[i];
    }
    cout << "max no is " << max;
    return 0;
}