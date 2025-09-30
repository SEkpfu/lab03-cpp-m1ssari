#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    int n, k = 1;
    double s;
    cout << "n = ";
    cin >> n;
    while (k <= n)
    {
        s += 1.0 / (2.0 * k);
        k++;
    }
    cout << "s = " << s;
}