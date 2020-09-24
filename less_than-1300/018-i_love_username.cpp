#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int x;
    cin >> x;

    int maxx = x, minx = x;
    int counter = 0;

    while(n-- > 1)
    {
        cin >> x;
        if(x > maxx or x < minx)
            counter++;
        maxx = max(maxx, x);
        minx = min(x, minx);
    }

    cout << counter << '\n';

    return 0;
}