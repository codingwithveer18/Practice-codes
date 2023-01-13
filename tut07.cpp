/*
STARS PATTERN
*/

#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "enter x" << endl;
    cin >> x;

    // { PATTERN -1}
    // *
    // **
    // ***
    // ****
    // *****
    for (int m = 0; m < x; m++)
    {
        for (int n = 0; n <= m; n++)
        {
            cout << "*";
        }

        cout << endl;
    }
    // or
    for (int m = 0; m < x; m++)
    {
        for (int n = 0; n < x; n++)
        {
            if (m >= n)
            {
                cout << "*";
            }
            else
                cout << " ";
        }

        cout << endl;
    }

    //     // { PATTERN -2 }
    // * * * * *
    // * * * *
    // * * *
    // * *
    // *
    for (int m = x; m > 0; m--)
    {
        for (int n = 0; n < m; n++)
        {
            cout << "* ";
        }

        cout << endl;
    }

    // OR
    for (int i = x; i > 0; i--)
    {
        for (int j = 0; j < x; j++)
        {
            if (i > j)
            {
                cout << "* ";
            }
            else
                cout << " ";
        }

        cout << endl;
    }

    // { PATTERN -3}

    // ****
    //  ***
    //   **
    //    *
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
        {
            if (i > j)
            {
                cout << " ";
            }
            else
                cout << "*";
        }

        cout << endl;
    }

    // { PATTERN -4}
    //     *
    //    **
    //   ***
    //  ****
    // *****

    for (int i = 0; i <= x; i++)
    {
        for (int j = 0; j <= x; j++)
        {
            if (i + j >= x)
            {
                cout << "*";
            }
            else
                cout << " ";
        }

        cout << endl;
    }

    return 0;
}