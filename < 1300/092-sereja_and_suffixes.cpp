#include <bits/stdc++.h>

using namespace std;

unordered_set<int> s;

int size(int a)
{
    s.insert(a);
    return s.size();
}

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> v(n);
    for(int i=0;i<n;++i)
        cin >> v[i];
    
    vector<int> u(n);
    for(int i=n-1;i>=0;i--)
        u[i] = size(v[i]);

    int x;
    while(m--)
    {
        cin >> x;
        cout << u[x-1] << '\n';
    }

    return 0;
}