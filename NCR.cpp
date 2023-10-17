#include <iostream>
using namespace std;
float fact(int x);
int main()
{
    int n,r,ncr;
    cout<<"enter n and r";
    cin>>n>>r;
    if(r<=n)
    {
        ncr = fact(n)/(fact(n-r)*fact(r));
        cout<<"NCR ="<<ncr;
    }
    else
    cout<<"r is greator so ncr can't be found";
}
float fact(int x)
{
    int a,i;
    a=1;
    for(i=1;i<=x;i++)
    {
        a = a*i;
    }
    return (a);
}