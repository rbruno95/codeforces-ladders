#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i=0;i<n;++i)
        cin >> v[i];
    
    sort(v.begin(), v.end());

    long long sum = 0;
    for(int i=0;i<n;++i)
        sum += abs(v[i]-(i+1));
    
    cout << sum << '\n';

    return 0;
}