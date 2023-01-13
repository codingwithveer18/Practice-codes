// BINARY SEARCH

#include <iostream>
using namespace std;
int main()
{
    int n, key, l = 0, h, mid;
    cout << "ENTER No. OF ELEMENTS IN ARRAY" << endl;
    cin >> n;
    h = n - 1;
    int A[n];
    cout << "ENTER ELEMENTS"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    cout << "Enter key :" << endl;
    cin >>a;
    while (l <= h)
    {
        mid = (l + h) / 2;
        if (key == A[mid])
        {
            cout << "Key found at :" << mid+1 << endl;
            return 0;
        }
        else if (key < A[mid])
        {
            h = mid - 1;
        }
        else
                l = mid + 1;
    }
    cout << "key not found" << endl;
    return 0;
}