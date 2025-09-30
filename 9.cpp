#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    cout << "Введите целые числа: " << endl;
    int n, k, maks = 0;
    do
    {
        cout << "n = ";
        cin >> n;
        if (n > maks)
        {
            k = 0;
            maks = n;
        }
        if (n == maks)
        {
            k += 1;
        }

    } while (n != 0);
    cout << "Количество элементов последовательности, которые равны ее наибольшему элементу: " << k;
}