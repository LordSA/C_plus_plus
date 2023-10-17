#include <iostream>
#include <cmath>
#include <chrono>
#include <thread>
#include "xtra.h"
using namespace std;

int main()
{
    system("CLS");
    float sum ,t1;
    int x,c=3,n,i;
    cout<<"Enter the value of x\n";
    cin>>x;
    cout<<"Enter the limit\n";
    cin>>n;
    system("CLS");
    while(c<=n)
    {
        t1= power(x,c);
        sum=sum+t1 ;
        c = c+2;
    }
    i=3;
    while(i<=n)
    {
        c=i;
        cout<<x<<"^"<<c<<"/"<<c<<"! + ";
        i=i+2;
        sleep(2);
    }
    cout<<"\nSum = "<<sum;
    return 0;
}