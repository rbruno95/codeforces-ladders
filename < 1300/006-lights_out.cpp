#include <bits/stdc++.h>

using namespace std;

int lights[3][3];

int main()
{

    int x;
    for(int i=0;i<3;++i)
        for(int j=0;j<3;++j)
        {
            cin >> x;
            lights[i][j] += x;
            if(i > 0) lights[i-1][j] += x;
            if(i < 2) lights[i+1][j] += x;
            if(j > 0) lights[i][j-1] += x;
            if(j < 2) lights[i][j+1] += x;
        }

    for(int i=0;i<3;++i){
        for(int j=0;j<3;++j)
            if(lights[i][j] & 1) cout << 0;
            else cout << 1;
        cout << '\n';
    }

    return 0;
}