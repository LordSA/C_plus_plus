#include <iostream>
using namespace std;
struct stud
{
    int adm_no;
    char name[50];
    int age;
    int roll;
    char sch[50];
    int m;
};

int main()
{
    stud st;
    // input
    cout << "Welcome to Info";
    cout << "\nEnter Your Admission Number :";
    cin >> st.adm_no;
    cout << "\nEnter Your Name :";
    cin >> st.name;
    // cin.getline(st.name,30);
    cout << "\nEnter Your Age :";
    cin >> st.age;
    cout << "\nEnter Your Roll Number :";
    cin >> st.roll;
    cout << "\nEnter Your School Name :";
    cin >> st.sch;
    cout << "\nEnter Your Mark :";
    cin >> st.m;
    if (st.m > 100)
    {
        cout << "\nInvalid Mark\nEnter Your Mark : ";
        cin >> st.m;
    }

    // output
    cout << "\nHere is Your Info";
    cout << "\nAdmission Number : " << st.adm_no;
    cout << "\nName : " << st.name;
    cout << "\nAge : " << st.age;
    cout << "\nRoll Number : " << st.roll;
    cout << "\nSchool : " << st.sch;
    cout << "\nMark : " << st.m;
    cout << "\nGrade : ";
    if (90 <= st.m)
        cout << "A+";
    else if (80 <= st.m && st.m < 90)
        cout << "A";
    else if (70 <= st.m && st.m < 80)
        cout << "B+";
    else if (60 <= st.m && st.m < 70)
        cout << "B";
    else if (50 <= st.m && st.m < 60)
        cout << "C+";
    else if (40 <= st.m && st.m < 50)
        cout << "C";
    else if (30 <= st.m && st.m < 40)
        cout << "D";
    else
        cout << "Failed";
    return 0;
}
