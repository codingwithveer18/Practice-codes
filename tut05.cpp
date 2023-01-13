// FINDING SUM OF ELEMENTS IN ARRAY

#include <iostream>
using namespace std;
int main()
{
    int sum=0, n;
    cout << "ENTER Number of elements in array" << endl;
    cin >> n;
    int A[n];
    cout << "ENTER Elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < n; i++)
    {
        sum = sum + A[i];
    }
    cout <<"SUM IS :"<<sum;
    return 0;
}