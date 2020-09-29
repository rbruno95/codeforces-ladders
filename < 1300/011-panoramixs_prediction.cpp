#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    auto is_prime = [](int p)
    {
        if(p == 2) return true;
        if(p % 2 == 0) return false;
        for(int i = 3 ; i * i <= p; i += 2)
            if(p % i == 0)
                return false;
        return true;
    };

    do
    {
        n++;
    }while(!is_prime(n));

    if(n == m) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}