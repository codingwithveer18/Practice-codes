// Q-1) WAP to enter two arrays and create a new array using Concatenation and Merging.
#include <iostream>
using namespace std;
void display(int *ar, int n)
{

    for (int i = 0; i < n; i++)
    {

        cout << ar[i] << "\t";
    }

    cout << endl;
}

void sort(int *ar, int n)
{

    int temp = 0;
    for (int i = 0; i < n; i++)
    {

        for (int j = i + 1; j < n; j++)
        {

            if (ar[i] > ar[j])
            {
                temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
            }
        }
    }

    display(ar, n);
}

int main()
{

    int a[100], b[100];
    int n1, n2;
    cout << "Enter the length of array 1 and array 2 separated by a space:";
    cin >> n1 >> n2;
    cout << "Entering the elements of Array 1:\n";
    for (int i = 0; i < n1; i++)
    {

        cout << "Enter the element at index " << i << ":";
        cin >> a[i];
        cout << endl;
    }

    cout << "Entering the elements of Array 2:\n";
    for (int j = 0; j < n2; j++)
    {

        cout << "Enter the element at index " << j << ":";
        cin >> b[j];
        cout << endl;
    }

    int c[100];
    int l = n1 + n2;
    while (true)
    {
        int ch;
        cout << "Press 1 for Concatenation of arrays\nPress 2 for Merging both arrays\n";
        cin >> ch;
        if (ch == 1)
        {
            int ctr = 0;
            for (int i = 0; i < l; i++)

            {
                if (i < n1)
                {

                    c[i] = a[i];
                }

                else
                {

                    c[i] = b[ctr];
                    ctr++;
                }
            }

            cout << "Conatenating both arrays:\n";
            display(c, l);
        }
        else if (ch == 2)
        {
            int i = 0, k = 0, j = 0;
            sort(a, n1);
            sort(b, n2);
            while (true)
            {

                if (a[k] >= b[j])
                {

                    c[i] = b[j];
                    j++;
                }

                else
                {

                    c[i] = a[k];

                    k++;
                }

                i++;
                if (k == n1 || j == n2)
                    break;
            }

            if (k == n1 && j < n2)
            {

                for (; i < l; i++)
                {

                    c[i] = b[j];
                    j++;
                }
            }

            else if (j == n2 && k < n1)
            {

                for (; i < l; i++)
                {

                    c[i] = a[k];
                    k++;
                }
            }

            cout << "Merging both arrays we get:\n";
            display(c, l);
        }
        else
        {

            cout << "Wrong choice\n";
        }

        int choice;
        cout << "Press 1 to continue else press any other key\n";
        cin >> choice;
        if (choice == 1)
            continue;
        else
            break;
    }
    return 0;
}

// OUTPUT:-
// Enter the length of array 1 and array 2 separated by a space:4 4
// Entering the elements of Array 1:
// Enter the element at index 0:4
// Enter the element at index 1:3
//  Enter the element at index 2:6 Enter the element at index 3:1 Entering the elements of Array 2:
// Enter the element at index 0:8 Enter the element at index 1:0 Enter the element at index 2:2 Enter the element at index 3:9 Press 1 for Concatenation of arrays Press 2 for Merging both arrays
// 1
// Conatenating both arrays:
// 4	3	6	1	8	0	2	9
// Press 1 to continue else press any other key 1

// Press 1 for Concatenation of arrays Press 2 for Merging both arrays
// 2

// 1
// 3
// 4
// 6
// 0
// 2
// 8
// 9

// Merging both arrays we get:
// 0	1	2	3	4	6	8	9
// Press 1 to continue else press any other key K

// Q)WAP to implement Matrix Multiplication.
#include <iostream>
using namespace std;
void display(int ar[][100], int r, int c)
{

    for (int i = 0; i < r; i++)
    {

        for (int j = 0; j < c; j++)
        {

            cout << ar[i][j] << "\t";
        }

        cout << endl;
    }
}

int main()
{

    int a[100][100], b[100][100];
    int r1, r2, c1, c2;

    cout << "Enter the row and column of matrix 1:";
    cin >> r1 >> c1;
    cout << "Enter the row and column of matrix 2:";
    cin >> r2 >> c2;
    if (c1 != r2)
    {

        cout << "Matrix Multiplication Not Possible\n";
    }

    else
    {
        cout << "Entering the elements of matrix 1 :\n";
        for (int i = 0; i < r1; i++)
        {

            for (int j = 0; j < c1; j++)
            {

                cout << "Enter the element at row " << i + 1 << "and column " << j + 1 << ":";
                cin >> a[i][j];
                cout << endl;
            }
        }

        cout << endl;
        cout << "Entering the elements of matrix 2 :\n";
        for (int i = 0; i < r2; i++)
        {

            for (int j = 0; j < c2; j++)
            {

                cout << "Enter the element at row " << i + 1 << "and column " << j + 1 << ":";
                cin >> b[i][j];
                cout << endl;
            }
        }

        cout << "\nMatrix 1:\n";
        display(a, r1, c1);
        cout << "Matrix 2:\n";
        display(b, r2, c2);
        int c[100][100];
        for (int i = 0; i < r1; i++)
        {

            for (int j = 0; j < c2; j++)
            {

                for (int k = 0; k < r2; k++)
                {

                    c[i][j] += a[i][k] * b[k][j];
                }
            }
        }

        cout << "Multiplication of matrices:\n";
        display(c, r1, c2);
    }
    return 0;
}

// OUTPUT:-
// Enter the row and column of matrix 1:2 3 Enter the row and column of matrix 2:3 2 Entering the elements of matrix 1 :
// Enter the element at row 1and column 1:2 Enter the element at row 1and column 2:1 Enter the element at row 1and column 3:0

// Enter the element at row 2and column 1:0 Enter the element at row 2and column 2:3 Enter the element at row 2and column 3:4 Entering the elements of matrix 2 :
// Enter the element at row 1and column 1:3 Enter the element at row 1and column 2:4 Enter the element at row 2and column 1:3 Enter the element at row 2and column 2:1 Enter the element at row 3and column 1:1 Enter the element at row 3and column 2:2 Matrix 1:
// 2
// 1
// 0
// 0
// 3
// 4
// Matrix 2:
// 3
// 4
// 3
// 1
// 1
// 2

// Multiplication of matrices:
// 9	9
// 13	11

// Q) WAP to implement push, pop and display algorithms using stack through array.
#include <iostream>
using namespace std;
static int m = 100;
static int top = -1;
void push(int stack[], int n)
{

    if (top == m)

        cout << "Overflow\n";
    else
    {

        top++;
        stack[top] = n;
    }
}

void pop(int stack[])
{

    if (top == -1)
        cout << "Underflow\n";
    else
    {

        stack[top] = NULL;
        top--;
    }
}

void display(int stack[])
{

    for (int i = top; i >= 0; i--)
    {

        cout << stack[i] << "\t";
    }

    cout << endl;
}

int main()
{

    int stack[100];
    while (true)

    {
        cout << "Press 1 for push\nPress 2 for pop\nPress 3 for display\n";
        int ch;
        cin >> ch;
        if (ch == 1)
        {

            int n;
            cout << "Enter the element to be inserted:";
            cin >> n;
            cout << endl;
            push(stack, n);
        }

        else if (ch == 2)
            pop(stack);
        else if (ch == 3)
            display(stack);
        cout << "Press y to continue else press any other key\n";
        char cho;
        cin >> cho;
        if (cho == 'y')
            continue;
        else
            break;
    }
}

// OUTPUT:-
// Press 1 for push

// Press 2 for pop Press 3 for display 1
// Enter the element to be inserted:3
// Press y to continue else press any other key y
// Press 1 for push Press 2 for pop Press 3 for display 1
// Enter the element to be inserted:5
// Press y to continue else press any other key y
// Press 1 for push Press 2 for pop Press 3 for display 1
// Enter the element to be inserted:5
// Press y to continue else press any other key y
// Press 1 for push Press 2 for pop Press 3 for display 3
// 5	5	3
// Press y to continue else press any other key y
// Press 1 for push Press 2 for pop

// Press 3 for display 2
// Press y to continue else press any other key y
// Press 1 for push Press 2 for pop Press 3 for display 3
// 5	3
// Press y to continue else press any other key y
// Press 1 for push Press 2 for pop Press 3 for display 2
// Press y to continue else press any other key y
// Press 1 for push Press 2 for pop Press 3 for display 2
// Press y to continue else press any other key y
// Press 1 for push Press 2 for pop Press 3 for display 2
// Underflow
// Press y to continue else press any other key

// n

// Q) WAP to implement push, pop and display algorithms using queue through array.
#include <iostream>
using namespace std;
static int queue[100];
static int rear = -1, front = -1, m = 100;
void push(int n)
{

    if (rear == m - 1)
        cout << "Overflow\n";
    else
    {

        if (rear == front && rear == -1)
        {

            rear++;
            front++;
        }

        else
            rear++;
        queue[rear] = n;
    }
}

void pop()
{

    if (front == -1)
        cout << "Underflow\n";
    else
    {

        queue[front] = NULL;
        if (front == rear)
            front = -1;
        else
        {

            front = front + 1;
        }
    }
}

void display()
{

    for (int i = front; i <= rear; i++)
    {

        cout << queue[i] << "\t";
    }

    cout << endl;
}

int main()
{

    while (true)
    {

        cout << "Press 1 for push\nPress 2 for pop\nPress 3 for display\n";
        int ch;
        cin >> ch;
        if (ch == 1)
        {

            int n;
            cout << "Enter the element to be inserted:";
            cin >> n;

            cout << endl;
            push(n);
        }

        else if (ch == 2)
            pop();
        else if (ch == 3)
            display();
        cout << "Press y to continue else press any other key\n";
        char cho;
        cin >> cho;
        if (cho == 'y')
            continue;
        else
            break;
    }

    return 0;
}

// OUTPUT:-
// Press 1 for push Press 2 for pop Press 3 for display 1
// Enter the element to be inserted:5
// Press y to continue else press any other key y
// Press 1 for push Press 2 for pop

// Press 3 for display 1
// Enter the element to be inserted:7
// Press y to continue else press any other key y
// Press 1 for push Press 2 for pop Press 3 for display 1
// Enter the element to be inserted:2
// Press y to continue else press any other key y
// Press 1 for push Press 2 for pop Press 3 for display 1
// Enter the element to be inserted:4
// Press y to continue else press any other key y
// Press 1 for push Press 2 for pop Press 3 for display 3
// 5	7	2	4
// Press y to continue else press any other key y
// Press 1 for push Press 2 for pop Press 3 for display

// 2
// Press y to continue else press any other key y
// Press 1 for push Press 2 for pop Press 3 for display 3
// 7	2	4
// Press y to continue else press any other key n
