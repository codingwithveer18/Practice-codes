// LINEAR SEARCH

#include <iostream>
using namespace std;
int main()
{
    int n, key;
    cout << "ENTER NO. OF ELEMENTS WANT IN ARRAY";
    cin >> n;
    cout << "ENTER ELEMENTS" << endl;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    cout << "Enter key" << endl;
    cin >> key;
    for (int i = 0; i < n; i++)
    {
        if (key == A[i])
        {
            cout << "Key found at: " << i + 1 << endl;
            exit(0);
        }
    }
    cout << "Key not found";
    return 0;
}