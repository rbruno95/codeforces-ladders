#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    map<int, int> mp;

    int x;
    for(int i=1;i<=n;++i)  
    {
        cin >> x;
        mp[x] = i;    
    }

    int m;
    cin >> m;

    long long vasya = 0, petya = 0;
    
    int b;
    while(m--)
    {
        cin >> b;
        vasya += mp[b];
        petya += (n - mp[b] + 1);
    }

    cout << vasya << " " << petya << '\n';        

    return 0;
}