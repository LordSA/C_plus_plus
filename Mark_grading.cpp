#include <iostream>
using namespace std;
int main()
{
    int m[6], i, j;
    char g[6], s[6];
    cout << "Enter the Marks!";
    for (i = 0; i <= 5; i++)
    {
        if (i == 0)
            cout << "\nLanguage = ";
        else if (i == 1)
            cout << "\nEnglish = ";
        else if (i == 2)
            cout << "\nBio/CS = ";
        else if (i == 3)
            cout << "\nMaths = ";
        else if (i == 4)
            cout << "\nChemistry = ";
        else
            cout << "\nPhysics = ";

        cin >> m[i];
        if (60 < m[i])
        {
            cout << "Mark Unidentified(<60)\nPlease Rewrite the Mark = ";
            cin >> m[i];
        }
    }
    for (i = 0; i <= 5; i++)
    {
        j = i;
        if (54 <= m[i])
        {
            g[j] = 'A';
            s[j] = '+';
        }
        else if ((48 <= m[i]) && (m[i] < 54))
        {
            g[j] = 'A';
            s[j] = ' ';
        }
        else if ((42 <= m[i]) && (m[i] < 48))
        {
            g[j] = 'B';
            s[j] = '+';
        }
        else if ((36 <= m[i]) && (m[i] < 42))
        {
            g[j] = 'B';
            s[j] = ' ';
        }
        else if ((30 <= m[i]) && (m[i] < 36))
        {
            g[j] = 'C';
            s[j] = '+';
        }
        else if ((24 <= m[i]) && (m[i] < 30))
        {
            g[j] = 'C';
            s[j] = ' ';
        }
        else if ((18 <= m[i]) && (m[i] < 24))
        {
            g[j] = 'D';
            s[j] = ' ';
        }
        else
        {
            g[j] = 'F';
            s[j] = ' ';
        }
    }
    for (i = 0; i <= 5; i++)
    {
        if (i == 0)
            cout << "\nLanguage = ";
        else if (i == 1)
            cout << "\nEnglish = ";
        else if (i == 2)
            cout << "\n Bio/CS = ";
        else if (i == 3)
            cout << "\n Maths = ";
        else if (i == 4)
            cout << "\n Chemistry = ";
        else
            cout << "\n Physics = ";
        cout << g[i] << s[i];
    }
    float total_mark;
    for (i = 0; i <= 5; i++)
    {
        total_mark = total_mark + m[i];
    }
    cout << "\nTotal Mark Scored = " << total_mark << "/360";
    cout << "\nPercentage = " << ((total_mark / 360) * 100) << "%";
    if (g[0] == 'F' || g[1] == 'F' || g[2] == 'F' || g[3] == 'F' || g[4] == 'F' || g[5] == 'F')
        cout << "\nFailed\nNot Eligible for Higher Studies";
    else
        cout << "\nPassed\nEligible For Higher Studies";
    return 0;
}