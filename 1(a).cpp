#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    int t = 0;
    while (t <= 100)
    {
        cout << t << " tc" << endl;
        cout << 9.0 / 5.0 * t + 32.0 << " Фаренгейт " << endl;
        t = t + 10;
    }
    return 0;
}