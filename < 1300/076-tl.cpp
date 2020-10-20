#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> ac(n), wa(m);
    for(int i=0;i<n;++i) cin >> ac[i];
    for(int i=0;i<m;++i) cin >> wa[i];

    sort(ac.begin(), ac.end());
    sort(wa.begin(), wa.end());

    for(int i=1;i<=100;++i)
    {
        if(i >= ac[n-1] and i >= ac[0] * 2 and i < wa[0])
        {
            cout << i << '\n';
            return 0;
        }
    }

    cout << -1 << '\n';

    return 0;
}