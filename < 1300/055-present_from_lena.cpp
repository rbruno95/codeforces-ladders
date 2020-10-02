#include <bits/stdc++.h>

using namespace std;

void print_line(int n, int m)
{
    cout << string(2*(n-m), ' ');

    for(int i=0;i<m;++i)
        cout << i << ' ';

    for(int i=m;i>=0;i--)
        cout << i << " \n"[i == 0];
}

int main()
{
    int n;
    cin >> n;

    for(int i=0;i<=n;++i)
        print_line(n, i);
    
    for(int i=n-1;i>=0;i--)
        print_line(n, i);

    return 0;
}