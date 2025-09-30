#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    double x, y;
    cout << "n = ";
    cin >> n;
    cout << "x = ";
    cin >> x;
    y = cos(x);
    for (int i = 1; i <= n; i++)
    {
        y = cos(x + y);
    }
    cout << y;
}