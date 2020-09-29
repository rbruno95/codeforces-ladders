#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int a, b, c;
    int counter = 0;

    while(n--)
    {
        cin >> a >> b >> c;
        counter = counter + (a+b+c >= 2);
    }

    cout << counter << '\n';

    return 0;
}