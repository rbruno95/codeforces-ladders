#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<vector<int>> g(5, vector<int>(5));

    for(int i=0;i<5;++i)
        for(int j=0;j<5;++j)
            cin >> g[i][j];
    
    vector<int> v = {0,1,2,3,4};

    int maxx = 0;
    do
    {
        int accum = 0;
        for(int i=0;i<4;++i)
            for(int j=0;j+i<4;j+=2)
                accum += g[v[i+j]][v[i+j+1]] + g[v[i+j+1]][v[i+j]];

        maxx = max(maxx, accum);

    }while(next_permutation(v.begin(),v.end()));

    cout << maxx << '\n';

    return 0;
}