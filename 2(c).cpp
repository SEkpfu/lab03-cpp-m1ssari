#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    int b, i;
    while (i < 8)
    {
        int a;
        cout << "a = ";
        cin >> a;
        if (a < b)
        {
            b = min(a, b);
        }
        i++;
    }
    cout << "Наименьшее из всех введенных чисел: " << b;
}