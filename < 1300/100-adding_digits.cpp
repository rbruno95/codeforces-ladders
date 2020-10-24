#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, n;
    cin >> a >> b >> n;
    
    for(int i=0;i<10;++i)
        if((a*10+i) % b == 0)
        {
            cout << a*10+i << string(n-1, '0') << '\n';
            return 0;
        }
        
    cout << -1 << '\n';

    return 0;
}