// ADDITION OF 2 MATRICES
#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cout << "Enter number of rows -" << endl;
    cin >> x;
    cout << "Enter number of columns -" << endl;
    cin >> y;
    cout << "Enter elememts of A matrix -" << endl;
    
    // here in array , X is for column and Y is for row
    int A[x][y];
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cin >> A[i][j];
        }
    }
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Enter elememts of B matrix-" << endl;
    int B[x][y];
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cin >> B[i][j];
        }
    }
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cout << B[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << "Addition of A and B is :" << endl;
    int C[x][y];
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Subtracrion of A and B is :" << endl;
    int D[x][y];
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            D[i][j] = A[i][j] - B[i][j];
            cout << D[i][j] << " ";
        }
        cout << endl;
    }
    int E[x][y];
    for (int i = 0; i <x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            E[i][j] = 0;
            for (int k = 0; k < x; k++)
            {
                E[i][j] = E[i][j] + (A[i][k] * A[k][j]);
            }
        }
    }

    // // printing
    // cout << "product is:";
    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j < y; j++)
    //     {
    //         cout << c[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    return 0;
}
