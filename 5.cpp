#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double e, s = 0;
    cout << "e = ";
    cin >> e;
    for (int i = 1, z = 1; fabs(1.0 / i >= e); i += 2, z = -z)
    {
        s += z * 1.0 / i;
    }
    cout << s;
}