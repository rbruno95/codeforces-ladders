#include <bits/stdc++.h>

using namespace std;

const int MOD = 1073741824;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    
    vector<int> d(a * b * c + 1, 1);

    for(int i=2;i<=a*b*c;++i)
        for(int j=i;j<=a*b*c;j+=i)
            d[j]++;
    
    long long sum = 0;
    for(int i=1;i<=a;++i)
        for(int j=1;j<=b;++j)
            for(int k=1;k<=c;++k)
                sum = (sum + d[i*j*k]) % MOD;
    
    cout << sum << '\n';

    return 0;
}