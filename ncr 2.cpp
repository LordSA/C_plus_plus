#include <iostream>
#include <cmath>
int fact(int x);
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

int fact(int x)
{
    int i,f=1;
    for(i=1;i<=x;i++)
    {
        f = f*i;
    }
    return f;
}