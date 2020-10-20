#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int x;
    int sum = 0;
    for(int i=0;i<n;++i)
    {
        cin >> x;
        sum += x;
    }
    
    if(sum % n) cout << n-1 << '\n';
    else cout << n << '\n';

    return 0;
}