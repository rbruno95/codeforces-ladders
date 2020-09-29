#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x, y, z;
    cin >> x >> y >> z;

    for(int a = 1;a <= x;++a)
    {
        if(x % a == 0 and y % a == 0 and z == (x/a) * (y/a))
        {
            cout << 4 * (a + x/a + y/a) << '\n';
            return 0;
        }
    }

    return 0;
}