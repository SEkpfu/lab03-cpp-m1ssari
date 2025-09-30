#include <iostream>
using namespace std;
int main()
{
    string s, s1, s2;
    int n;
    cout << "n = ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            s1 += "* ";
            s2 += "o ";
        }
        else
        {
            s1 += "o ";
            s2 += "* ";
        }
    }
    s1 += "\n";
    s2 += "\n";
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            s += s1;
        }
        else
        {
            s += s2;
        }
    }
    cout << s;
}