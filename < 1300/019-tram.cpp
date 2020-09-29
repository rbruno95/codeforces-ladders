#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int a, b;
    int tram = 0;
    int mint = 0;

    while(n--)
    {
        cin >> a >> b;
        tram = tram - a + b;
        mint = max(mint, tram);
    }

    cout << mint << '\n';

    return 0;
}