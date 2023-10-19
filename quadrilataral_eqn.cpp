// -------------------------- https://github.com/LordSA -------------------------
#include <iostream>
#include "xtra.h"
#include <cstdlib>
#include <cmath>
using namespace std;
int main()
{
    float a,b,c,d1,d2;
    system("CLS");
    cout<<"Enter the coefficient of x^2 : ";
    cin>>a;
    cout<<"Enter the coefficient of x   : ";
    cin>>b;
    cout<<"enter the value of c         :";
    cin>>c;
    system("CLS");
    cout<<a<<"x^2+"<<b<<"x+"<<c;
    sleep(1);
    //function
//    x=sqrt(sq(b)-4*a*c);
//    e=2*a;
//    b = -1*b;
    d1 = quad_eqn1(a,b,c);
    d2 = quad_eqn2(a,b,c);
    cout<<"x = "<<d1<<" or "<<d2;
    if(d1==d2)
    cout<<"\nit have only one root : "<<d1;
    sleep(5);
    system("CLS");
    cout<<"\t\tThank You\t\t";
    sleep(5);
    system("CLS");
    return 0;
}