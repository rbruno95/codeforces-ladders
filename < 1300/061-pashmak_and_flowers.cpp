#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    multiset<int> ms;

    int x;
    for(int i=0;i<n;++i)
    {
        cin >> x;
        ms.insert(x);
    }

    int a = *ms.begin();
    int b = *ms.rbegin();
    int t_a = ms.count(a);
    int t_b = ms.count(b);

    cout << b - a << " ";

    if(a == b) cout << 1LL * t_a * (t_a - 1) /2; 
    else cout << 1LL * t_a * t_b;

    cout << '\n';

    return 0;    
}