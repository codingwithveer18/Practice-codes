#include <iostream>
using namespace std;
struct rectangle
{
    int length;
    int breadth;
};

// // CALL BE VALUE
// int fun(struct rectangle r)
// {
//     r.length = 20;
//     r.breadth = 11;
//     cout << "Length " << r.length << endl
//          << "Breadth " << r.breadth;
//     return 0;
// }
// int main()
// {
//     struct rectangle r = {10, 2};
//     fun(r);
//     // THIS r.length WILL PRINT THE VALUE OF LENGTH INITIALIZE IN THE MAIN FUNCTION
//     cout << "length" << r.length;
// }

// // CALL BE ADDRESS
// int fun(struct rectangle *r)
// {
//     r->length = 110;
//     r->breadth = 1101;
//     cout << "Length" << r->length << endl
//          << "Breadth" << r->breadth << endl;
//     return 0;
// }
// int main()
// {
//     struct rectangle r = {18, 2};
//     fun(&r);
//     // THIS r.length WILL PRINT THE VALUE OF LENGTH SAME AS IN FUNCTION 'fun'
//     cout << "length" << r.length << "breadth" << r.breadth;
// }
// // OR
// // (IN CASE OF CPP)

// struct rectangle *fun()
// {
//     struct rectangle *r;
//     r=new rectangle;
//     r->length = 110;
//     r->breadth = 1101;
//     cout << "Length" << r->length << endl
//          << "Breadth" << r->breadth << endl;
//     return r;
// }
// int main()
// {
//     struct rectangle *r=fun();
//     // THIS r.length WILL PRINT THE VALUE OF LENGTH SAME AS IN FUNCTION 'fun'
//     cout << "length" << r->length << "breadth" << r->breadth;
// }


// // CALL BE REFERENCE
int swap(int &x , int &y)
{
    int temp;
    temp = x;
    x=y;
    y=temp;
    return 0;
}
int main()
{
    int a=10,b=12;
    swap(a,b);
    cout <<"a and b become"<<a<<b;
}
