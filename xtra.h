// -------------------------- https://github.com/LordSA -------------------------
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
float quad_eqn1(float a, float b, float c);
float quad_eqn2(float a, float b, float c);

//Funcions
// -------------------------- https://github.com/LordSA -------------------------
// Factorial
int fact(int x)
{
    int i, f = 1;
    for (i = 1; i <= x; i++)
    {
        f = f * i;
    }
    return f;
}
// Power
float power(int x, int y)
{
    int p = 1, t;
    float e;
    for (j = 1; j <= y; j++)
        p = p * x;
    t = fact(y);
    e = (float)p / t;
    return e;
}
// Square
int sq(int x)
{
    return (x * x);
}
// Cube
int cube(int x)
{
    return (x * x * x);
}
// Sleep seconds if you need it change
float sleep(int x)
{
    for (j = 0; j < x; j++)
    {
        std::this_thread::sleep_for(1s);
    }
    return 0;
}
// Quadratic Equation {
// Addition
float quad_eqn1(float a, float b, float c)
{
    float d1, e, x;
    x = sqrt(sq(b) - 4 * a * c);
    e = 2 * a;
    b = -1 * b;
    d1 = (b + x) / e;
    // d2 = (b-x)/e;
    return d1;
}
// Substraction
float quad_eqn2(float a, float b, float c)
{
    float d2, e, x;
    x = sqrt(sq(b) - 4 * a * c);
    e = 2 * a;
    b = -1 * b;
    // d1 = (b+x)/e;
    d2 = (b - x) / e;
    return d2;
}
// }
// -------------------------- https://github.com/LordSA -------------------------