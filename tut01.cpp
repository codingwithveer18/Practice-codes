// INPUT ARRAY
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "ENTER NO. OF ELEMENTS YOU WANT ";
    cin >> n;
    cout << "ENTER ELEMENTS  " << endl;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << endl<< A[i] ;
    }
    return 0;
}