#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a, b, c;
    cin >> n >> a >> b >> c;

    int maxx = 0;
    for(int i=0;i<=n and i*a <= n;++i)
        for(int j=0;j<=n and i*a + j*b <= n;++j)
            if((n-i*a-j*b)%c==0)
                maxx = max(maxx, i+j+(n-i*a-j*b)/c);
    
    cout << maxx << '\n';

    return 0;
}