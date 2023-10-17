#include <iostream>
// #include <cmath> // meth 2
#include "xtra.h" // meth 3
using namespace std;
int main()
{
    system("CLS");
    int r = 0, s = 0, i, n;
    cout << "Enter the Limit No : ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        // r = i*i; //meth 1
        // r = pow(i,2); //meth 2
        r = sq(i); // meth 3
        s = s + r;
    }
    cout << "Sum : " << s;
    return 0;
}