#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    map<int, int> mp;
    int sum = 0;
    int x;

    for(int i=0;i<n;++i)
    {
        cin >> x;
        sum += x;
        mp[x]++;
    }

    sum /= 100;

    cout << ((sum & 1 or (mp[200] & 1 and !mp[100])) ? "NO" : "YES") << '\n';

    return 0;
}