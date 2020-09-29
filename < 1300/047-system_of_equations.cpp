#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int t = min(n,m);
    int counter = 0;

    for(int a=0;a<=t;++a)
        for(int b=0;b<=t;++b)
            counter+= (a * a + b == n and a + b * b == m);

    cout << counter << '\n';

    return 0;
}