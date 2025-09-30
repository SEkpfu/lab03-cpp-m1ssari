#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    cout << "Введите целые число: " << endl
         << "Напишите stop, когда прекратите ввод " << endl;
    int n, k, ch;
    string s;
    do
    {
        cout << "n = ";
        cin >> s;
        if (s == "stop")
        {
            break;
        }
        else
        {
            if ((stoi(s) & 1) == 0)
            {
                ch += 1;
            }
        }
        k += 1;

    } while (s != "stop");
    cout << "Количество чётных чисел: " << ch << endl;
    cout << "Количество введённых чисел: " << k;
}