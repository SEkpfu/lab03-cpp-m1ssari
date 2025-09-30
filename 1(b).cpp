#include <iostream>
using namespace std;
#include <cmath>
int main()
{
    double x = 0, y = 0;
    do
    {
        y = log(x + 1.0) * sin(x);
        cout << x << endl
             << y;
        x += 0.5;
    } while (x < 5.5);
    return 0;
}