#include <iostream>
#include <cmath>
#include "xtra.h"
using namespace std;
int main()
{
    int ncr,n,r;
    cout<<"Enter The Values for N and r\n";
    cin>>n>>r;
    ncr = fact(n)/(fact(n-r)*fact(r));
    cout<<"NCR = "<<ncr;
    return 0;
}