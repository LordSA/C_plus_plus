#include <iostream>
using namespace std;
int main()
{
    int s=0,n,n1,r;

    cout<<"enter thr number";
    cin>>n;
    n1=n;
    a :
    if(n>0)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
        goto a;
    }
    
    if(s==n1)
    cout<<"it is palindrome"<<n1<<" = "<<s;
    else
    cout<<"it is not palindrome";
    return 0;
}