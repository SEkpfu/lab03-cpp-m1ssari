#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    double p = 0;
    double x, y, x0, y0;
    cout << "n = ";
    cin >> n;
    cout << "x1 = ";
    cin >> x;
    cout << "y1 = ";
    cin >> y;
    x0 = x;
    y0 = y;
    for (int i = 1; i <= n; i++)
    {
        double x1, y1;
        cout << "Введите x" << i + 1 << ", y" << i + 1 << "\n";
        cin >> x1 >> y1;
        p += pow(pow(x - x1, 2) + pow(y - y1, 2), 0.5);
        x = x1;
        y = y1;
    }
    p += sqrt(pow(x - x0, 2) + pow(y - y0, 2));
    cout << "P = " << p;
}