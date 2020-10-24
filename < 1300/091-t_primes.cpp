#include <bits/stdc++.h>

using namespace std;

bool is_prime(long long x)
{
    if(x == 1) return false;
    if(x == 2) return true;
    if(x % 2 == 0) return false;
    for(long long i=3;i*i<=x;i+=2)
        if(x%i==0) return false;
    return true;
}

int main()
{
    int n;
    cin >> n;

    unordered_set<long long> us;

    us.insert(4);
    for(long long i=3;i<=1000000;i+=2)
        if(is_prime(i))
            us.insert(i*i);

    long long x;
    while(n--)
    {
        cin >> x;
        if(us.count(x)) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}