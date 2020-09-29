#include <bits/stdc++.h>

using namespace std;

const int MAX = 1e5+10;

int main()
{
    int k,l,m,n,d;
    cin >> k >> l >> m >> n >> d;

    bitset<MAX> dragons;

    int counter = 0;
    for(int i=1;i<=d;++i)
    {
        dragons[i] = (i%k==0 or i%l==0 or i%m==0 or i%n==0) ? true : false;    
        counter += dragons[i];
    }

    cout << counter << '\n';

    return 0;
}