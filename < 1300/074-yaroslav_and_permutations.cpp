#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    map<int,int> mp;
    int x;
    int maxx_rep = 0;
    for(int i=0;i<n;++i)
    {
        cin >> x;
        mp[x]++;
        maxx_rep = max(maxx_rep, mp[x]);
    }

    if(n+1 < maxx_rep * 2) cout << "NO\n";
    else cout << "YES\n";

    return 0;
}