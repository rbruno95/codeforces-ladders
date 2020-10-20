#include <bits/stdc++.h>

using namespace std;

int main()
{
    int y, k, n;
    cin >> y >> k >> n;

    int x = k-y%k;
    if(!x) x = k;

    bool any = false;
    while(x + y <= n)
    {
        any = true;
        cout << x << ' ';
        x += k;
    }

    if(!any) cout << -1;
    
    cout << '\n';

    return 0;
}