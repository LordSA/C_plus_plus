#include <iostream>
#include "fact.h"
float fact(int x);
using namespace std;
int main()
{
    int n,r,ncr;
    cout<<"enter n and r";
    cin>>n>>r;
    if(r<=n)
    {
        ncr = fact(n)/fact(n-r);
        cout<<"NCR ="<<ncr;
    }
    else
    cout<<"r is greator so ncr can't be found";
}