#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x_sum = 0,y_sum = 0,z_sum = 0;
    int x, y, z;

    int n;
    cin >> n;

    while(n--)
    {
        cin >> x >> y >> z;
        x_sum += x;
        y_sum += y;
        z_sum += z;
    }

    if(x_sum || y_sum || z_sum) cout << "NO\n";
    else cout << "YES\n";

    return 0;
}