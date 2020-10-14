#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    map<int,int> mp;
    
    int x;
    for(int i=0;i<n;++i)
    {
        cin >> x;
        mp[x]++;
    }

    if(mp[1] == mp[2] + mp[3] and mp[1] == mp[4] + mp[6] and !mp[5] and mp[3] <= mp[6] and !mp[7])
    {
        for(int i=0;i<mp[4];++i)
            cout << "1 2 4\n";
        mp[2] -= mp[4];
        for(int i=0;i<mp[2];++i)
            cout << "1 2 6\n";
        mp[6] -= mp[2];
        for(int i=0;i<mp[6];++i)
            cout << "1 3 6\n";
    } else cout << -1 << '\n';

    return 0;
}