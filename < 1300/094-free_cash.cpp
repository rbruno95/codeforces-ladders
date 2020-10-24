#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    map<pair<int,int>,int> mp;
    int maxx = 0;

    int a, b;
    for(int i=0;i<n;++i)
    {
        cin >> a >> b;
        mp[{a,b}]++;
    }

    for(auto t: mp)
        maxx = max(maxx, t.second);

    cout << maxx << '\n';

    return 0;
}