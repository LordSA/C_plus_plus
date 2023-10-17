#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
#include "xtra.h" //very imp for my sleep func
using namespace std;
class calc
{
private:
public:
    // Declaration
    double a(double x, double y);
    double b(double x, double y);
    double c(double x, double y);
    double d(double x, double y);
};
// Function
// addition
double calc::a(double x, double y)
{
    return (x + y);
}
// substraction
double calc::b(double x, double y)
{
    return (x - y);
}
// multiplication
double calc::c(double x, double y)
{
    return (x * y);
}
// division
double calc::d(double x, double y)
{
    return (x / y);
}
// program
int main()
{
    calc c;
    int i, j, x, y;
    double add, sub, m, div;
    system("CLS");

    // input
    cout << "\tWelcome to the Calculator";
    sleep(1); // sleep func for seconds
    system("CLS");
b:
    do
    {
        cout << "\t\tMENU\t\t"
             << "\n";
        cout << "\tSelect the Method\t"
             << "\n";
        cout << "Addition\t\t1\n";
        cout << "Substraction\t\t2\n";
        cout << "Multiplication\t\t3\n";
        cout << "Division\t\t4\n";
        cout << "Exit\t\t\t5\n";
        cout << "Select (1,2,3,4,5)\n";
        cin  >> i;
        if (i != 5)
        {
            system("CLS");
            cout << "loading.";
            sleep(1); // sleep func for seconds
            system("CLS");
            cout << "loading..";
            sleep(1); // sleep func for seconds
            system("CLS");
            cout << "loading...";
            sleep(1); // sleep func for seconds
            system("CLS");
        }
        else
        {
            system("CLS");
            cout << "Do you want to Exit?\n"
                 << "(1,2)\n";
            cin  >> j;
            sleep(1); // sleep func for seconds
            system("CLS");
            if (j == 1)
                goto a;
            else
                goto b;
        }
    a:
        switch (i)
        {
        case 1:
        {
            cout << "\t\tAddition\t\t\n";
            cout << "Enter the numbers\n";
            cin  >> x >> y;
            system("CLS");
            add = c.a(x, y);
            cout << "Sum\t=\t" << add;
            cout << "\n\nDo you want to continue?"
                 << "\n(yes = 1, no = 2)\n";
            cin  >> j;
            system("CLS");
            if (j == 1)
            {
                sleep(1); // sleep func for seconds
                break;
            }
            else
            {
                cout << "\nThank you";
                sleep(1); // sleep func for seconds
                i = 5;
                system("CLS");
                goto a;
            }
        }
        case 2:
        {
            cout << "\t\tSubstraction\t\t\n";
            cout << "Enter the numbers\n";
            cin  >> x >> y;
            system("CLS");
            sub = c.b(x, y);
            cout << "Difference\t=\t" << sub;
            cout << "\n\nDo you want to continue?"
                 << "\n(yes = 1, no = 2)\n";
            cin  >> j;
            system("CLS");
            if (j == 1)
            {
                sleep(1); // sleep func for seconds
                break;
            }
            else
            {
                cout << "\nThank you";
                sleep(1); // sleep func for seconds
                i = 5;
                system("CLS");
                goto a;
            }
        }
        case 3:
        {
            cout << "\t\tMultiplication\t\t\n";
            cout << "Enter the numbers\n";
            cin  >> x >> y;
            system("CLS");
            m = c.c(x, y);
            cout << "Product\t=\t" << m;
            cout << "\n\nDo you want to continue?"
                 << "\n(yes = 1, no = 2)\n";
            cin  >> j;
            system("CLS");
            if (j == 1)
            {
                sleep(1); // sleep func for seconds
                break;
            }
            else
            {
                cout << "\nThank you";
                sleep(1); // sleep func for seconds
                i = 5;
                system("CLS");
                goto a;
            }
        }
        case 4:
        {
            cout << "\t\tDivision\t\t\n";
            cout << "Enter the numbers\n";
            cin  >> x >> y;
            system("CLS");
            div = c.d(x, y);
            cout << "Qoutiant\t=\t" << div;
            cout << "\n\nDo you want to continue?"
                 << "\n(yes = 1, no = 2)\n";
            cin  >> j;
            system("CLS");
            if (j == 1)
            {
                sleep(1); // sleep func for seconds
                break;
            }
            else
            {
                cout << "\nThank you";
                sleep(1); // sleep func for seconds
                i = 5;
                system("CLS");
                goto a;
            }
        }
        default:
        {
            cout << "\tThank you for using\n";
            sleep(1); // sleep func for seconds
            system("CLS");
        }
        }
    } while (i != 5);
    return 0;
}