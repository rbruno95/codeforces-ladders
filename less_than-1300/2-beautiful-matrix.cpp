#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x;
    for(int i=0;i<5;++i)
        for(int j=0;j<5;++j)
        {
            cin >> x;
            if(x)
            {
                cout << abs(2-i) + abs(2-j) << '\n';
                return 0;
            }
        }

    return 0;
}