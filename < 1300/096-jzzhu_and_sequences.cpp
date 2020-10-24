#include <bits/stdc++.h>

using namespace std;

const int MOD = 1e9+7;

int main()
{
    int x, y, n;
    cin >> x >> y >> n;

    vector<int> sol = {x,y,y-x,-x,-y,-y+x};

    cout << (sol[(n-1) % 6]%MOD+MOD)%MOD << '\n';

    return 0;
}