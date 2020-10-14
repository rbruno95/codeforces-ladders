#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    for(int i=0;i<n;++i)
        cin >> v[i];
    
    bool can = true;
    for(int i=k;i<n;++i)
        if(v[i] != v[i-1])
            can = false;
    
    if(can)
    {
        int ans = 0;
        for(int i=k-2;i>=0;i--)
            if(v[i] != v[k-1])
            {
                ans = i+1;
                break;
            }
        cout << ans;
    }
    else cout << -1;

    cout << '\n';

    return 0;
}