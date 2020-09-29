#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a, b;
    cin >> n >> a >> b;

    int counter = 0;
    for(int i=1;i<=n;++i)
        counter += (a < i and n-i <= b);

    cout << counter << '\n'; 

    return 0;
}