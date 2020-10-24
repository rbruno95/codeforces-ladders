#include <bits/stdc++.h>

using namespace std;

bool comparer(const pair<int,int> &a, const pair<int,int> &b)
{
    return a.first > b.first or (a.first == b.first and a.second < b.second);
}

int main()
{
    int n, k;
    cin >> n >> k;

    vector<pair<int,int>> v(n);
    multiset<pair<int,int>> ms;

    int a, b;
    for(int i=0;i<n;++i)
    {
        cin >> a >> b;
        v[i] = {a,b};
        ms.insert({a,b});
    }

    int counter = 0;
    sort(v.begin(), v.end(), comparer);

    cout << ms.count(v[k-1]) << '\n';

    return 0;
}