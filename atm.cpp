#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float remaining;
    float x, y;
    cin >> x >> y;
    if ((int)x % 5 == 0 and x + 0.5 <= y)
    {
        remaining = y - x - 0.50;
        cout << fixed << showpoint;
        cout << setprecision(2);
        cout << remaining;
    }
    else
    {

        cout << fixed << showpoint;
        cout << setprecision(2);
        cout << y << endl;
    }
}