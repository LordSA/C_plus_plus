#include <iostream>
using namespace std;
// Class
class vol
{
public: //Function Prototype
    double volume(double x);
    double volume(double x, double y);
    double volume(double x, double y, double z);
};
    // Function Definition
    double vol::volume(double x)
    {
        return (x * x * x);
    }

    double vol::volume(double x, double y)
    {
        return (3.14 * x * y);
    }

    double vol::volume(double x, double y, double z)
    {
        return (x * y * z);
    }

// program
int main()
{
    system("clear");
    vol obj;
    double volm, a, r, h;
    int c;

    do
    {
        cout << "\t\tMenu\n\n";
        cout << "Select your Choice\n";
        cout << "Volume of cube \t\t\t1\n";
        cout << "Volume of Cylinder \t\t2\n";
        cout << "Volume of Rectangle Box\t\t3\n";
        cout << "Exit from Program\t\t4\n";
        cout << "Enter your choice : ";
        cin >> c;
        system("clear");
        switch (c)
        {
        case 1:
        {
            cout << "Enter the length :";
            cin >> a;
            volm = obj.volume(a);
            cout << "\nVolume of Cube :\t" << volm << "\n\n\n";
            break;
        }
        case 2:
        {
            cout << "Enter the Values :-\n";
            cin >> a >> h;
            volm = obj.volume(a, h);
            cout << "Volume of Cylinder :\t" << volm << "\n\n\n";
            break;
        }
        case 3:
        {
            cout << "Enter the Values :-\n";
            cin >> a >> h >> r;
            volm = obj.volume(a, h, r);
            cout << "Volume of Rectangular Box :\t" << volm << "\n\n\n";
            break;
        }
        default:
        {
            cout << "Press Enter Key to Exit";
        }
        }
    } while (c != 4);
    return 0;
}
