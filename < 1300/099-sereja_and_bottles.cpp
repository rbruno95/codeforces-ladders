#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<pair<int,int>> v(n);

    for(int i=0;i<n;++i)
        cin >> v[i].first >> v[i].second;
    
    int counter = 0;
    for(int i=0;i<n;++i)
        for(int j=0;j<n;++j)
            if(i!=j and v[j].second == v[i].first)
            {
                counter++;
                break;
            }
    
    cout << n - counter << '\n';

    return 0;
}