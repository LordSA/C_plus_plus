#include <iostream>
#include <cmath>
#include "xtra.h"
using namespace std;
int main()
{
    system("CLS");
    int npr,n,r;
    cout<<"Enter The Values for N and r\n";
    cin>>n>>r;
    npr = fact(n)/fact(n-r);
    system("CLS");
    cout<<"NPR = "<<npr;
    return 0;
}