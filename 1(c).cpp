#define _USE_MATH_DEFINES
#include <iostream>
using namespace std;
#include <cmath>
int main()
{
    for (double x = 0; x < 2.0 * M_PI; x += M_PI / 6.0)
    {
        double y = cos(x);
        cout << x << endl
             << y;
    }
}