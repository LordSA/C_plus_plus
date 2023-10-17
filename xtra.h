// Headerfile Declaration
#include <iostream>
#include <chrono>
#include <thread>
#include <cstdlib>
#include <cstring>
#include <time.h>
#include <cmath>
#include <cctype>
using namespace std;
// Functions
int fact(int x);
int j;
float power(int x, int y);
int sq(int x);
int cube(int x);
/// @brief 
/// @param x 
/// @return 
float sleep(int x);
//Factorial
int fact(int x)
{
    int i,f=1;
    for(i=1;i<=x;i++)
    {
        f = f*i;
    }
    return f;
}
//Power
float power(int x, int y)
{
    int p=1,t;
    float e;
    for(j=1;j<=y;j++)
    p = p*x;
    t = fact(y);
    e = (float) p/t;
    return e;
}
//Square
int sq(int x)
{
    return(x*x);
}
//Cube
int cube(int x)
{
    return(x*x*x);
}
//Sleep seconds if you need it change
float sleep(int x)
{
    for(j=0;j<x;j++)
    {
    std::this_thread::sleep_for(1s);
    }
    return 0;
}