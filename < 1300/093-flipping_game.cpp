#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i=0;i<n;++i)
        cin >> v[i];
    
    int maxx = 0;
    for(int i=0;i<n;++i)
        for(int j=i;j<n;++j)
        {
            for(int k=i;k<=j;++k)
                v[k] = 1 - v[k];
            
            int sum = 0;
            for(int k=0;k<n;++k)
                sum += v[k];

            for(int k=i;k<=j;++k)
                v[k] = 1 - v[k];
        
            maxx = max(maxx, sum);
        }
    
    cout << maxx << '\n';

    return 0;
}