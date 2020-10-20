#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    unordered_set<int> s;
    for(int i=1;i<=n;++i)
        s.insert(i*i);
    
    int counter = 0;
    for(int i=1;i<=n;++i)
        for(int j=i+1;j<=n and i*i+j*j<=n*n;++j)
            if(s.count(i*i+j*j))
                counter++;
    
    cout << counter << '\n';

    return 0;
}