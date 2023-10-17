#include <iostream>
using namespace std;
int main()
{
    int a[25],n,i,it,l=-1;
    cout<<"How many elements? \n";
    cin>>n;
    cout<<"Enter the Elements \n";
    for(i=0;i<n;i++)
    cin>>a[i];
    cout<<"Enter the item to find its location.\n";
    cin>>it;
    for(i=0;i<n;i++)
    if(a[i]==it)
    {
        l=i;
        break;
    }
    if(l!=-1)
    cout<<"The item is found at postion : "<<l+1;
    else
    cout<<"The item is not found";
    return 0;
}
    