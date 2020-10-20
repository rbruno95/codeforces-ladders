#include <bits/stdc++.h>

using namespace std;

bool is_prime(int n)
{
    if(n == 2) return true;
    if(n % 2 == 0) return false;
    for(int i=3;i*i<=n;i+=2)
        if(n % i == 0)
            return false;
    return true;
}

int main()
{
    int n;
    cin >> n;

    for(int i=2; i<= 10000000 and n;++i)
    {
        if(is_prime(i))
        {
            cout << i << ' ';
            n--;
        }
    }

    cout << '\n';

    return 0;
}