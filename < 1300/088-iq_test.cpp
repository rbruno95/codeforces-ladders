#include <bits/stdc++.h>

using namespace std;

vector<string> tab(4);

bool check_square(int x, int y)
{
    int dots = 0;

    for(int i=0;i<2;++i)
        for(int j=0;j<2;++j)
            dots += tab[i+x][j+y] == '.';

    return dots != 2;
}

int main()
{
    for(int i=0;i<4;++i)
        cin >> tab[i];
    
    for(int i=0;i<3;++i)
        for(int j=0;j<3;++j)
            if(check_square(i,j))
            {
                cout << "YES\n";
                return 0;
            }

    cout << "NO\n";
    
    return 0;
}