#include <iostream>
using namespace std;
int main()
{
    // PROGRAM-1

    for(int i=0; i<=5;i++){
        for (int j = 0; j<=5; j++)
        {
            cout<<"("<<i<<","<<j<<")"<<" ";
        }

        cout<<endl;
    }

    // PROGRAM-2
    
    int count = 1;

    for (int m = 0; m < 4; m++)
    {
        for (int n = 0; n < 4; n++)
        {
            cout << count << " ";
            count++;
        }

        cout << endl;
    }
    return 0;
}
