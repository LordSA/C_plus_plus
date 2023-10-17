#include <iostream>
using namespace std;
int main()
{
    int a[30],n,i,j,t;
    cout<<"How many elements? \n";
    cin>>n;
    cout<<"Enter the elements \n";
    for(i=0;i<n;i++)
    cin>>a[i];
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    if(a[j]>a[j+1])
    {
        t=a[j];
        a[j]=a[j+1];
        a[j+1]=t;
    }
    cout<<"sorted elements is :- \n";
    for(i=0;i<n;i++)
    {
        int loc=0;
        loc=1+i;
    cout<<a[i]<<"\t"<<"position :"<<loc<<"\n";
    }
    return 0;
}