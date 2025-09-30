#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    int b = 0;
    for (int k = 1; k < 8; k++)
    {
        cout << "a = ";
        int a;
        cin >> a;
        if (a < 0)
            b++;
    }
    cout << "Количество отрицательных чисел: " << b;
}