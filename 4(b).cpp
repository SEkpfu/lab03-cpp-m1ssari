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
    y = sqrt(x);
    for (int i = 2; i <= n; i++)
    {
        y = sqrt(x + y);
    }
    cout << y;
}