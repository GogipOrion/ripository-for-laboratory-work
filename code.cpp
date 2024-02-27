#include <iostream>
using namespace std;

int main()
{
    int x, y, k, z = 1, i = 0, n;
    cin >> x;
    cin >> y;
    cin >> k;

    for (n = 0; k != i; n++)
    {
        z -= 1;
        z += x;
        if (z >= y)
        {
            z -= y;
            i += 1;
            n++;
        }
    }
    for (n; k > z; n++)
    {
        z -= 1;
        z += x;
    }
    cout << n << endl;
    return 0;
}