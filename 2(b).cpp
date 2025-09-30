#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    int b = 0;
    int i = 1;
    while (i < 8)
    {
        int a;
        cout << "Введите двузначное число: ";
        cin >> a;
        if ((a > 9) && (a < 100))
            b += a;
        i++;
    }
    cout << "Сумма двузначных чисел: " << b;
}