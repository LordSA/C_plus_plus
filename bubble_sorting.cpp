#include <iostream>
#include "sort.h"
float sort(int x[]);
using namespace std;
int main()
{
    int a[100],n,i;
    cout<<"enter the limit";
    cin>>n;
    cout<<"Enter the values\n";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    //sorting (sort.h)
    sort(a);
    //output :
    for(i=0;i<n;i++)
    {
    cout<<a[i]<<"\t"<<"Position :";
    cout<<"\n";
    }
    return 0;

}