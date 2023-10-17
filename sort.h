#include <iostream>
#include <cstring>
using namespace std;
float sort(int x[])
{
    int i,j,k,y;
    y = strlen(x)
    for(i=0;i<y;i++)
    {
    for(j=0;j<y;j++)
    {
        if(x[j]>x[j+1])
        {
        k = x[j];
        x[j] = x[j+1];
        x[j+1] = k;
        }
    }
    }
    return (x);
}