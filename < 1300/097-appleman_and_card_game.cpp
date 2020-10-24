#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    map<char,int> mp;
    for(int i=0;i<n;++i)    
        mp[s[i]]++;
    
    vector<int> v;
    for(auto x: mp)
        v.push_back(x.second);

    sort(v.begin(), v.end());

    long long sum = 0;

    while(k)
    {
        int t = min(v.back(), k);
        while(v.back() and k)
        {
            v.back()--;
            k--;
            sum += t;
        }
        v.pop_back();
    }

    cout << sum << '\n';

    return 0;
}