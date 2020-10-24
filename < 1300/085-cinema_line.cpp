#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int c25=0, c50=0;
    int x;

    for(int i=0;i<n;++i)
    {
        cin >> x;
        if(x == 25) c25++;
        if(x == 50)
        {
            c50++;
            if(c25) c25--;
            else 
            {
                cout << "NO\n";
                return 0;
            }
        }
        if(x == 100)
        {
            if(c50 and c25)
            {
                c50--;
                c25--;
            }
            else if(c25 >= 3)
                c25 -= 3;
            else 
            {
                cout << "NO\n";
                return 0;
            }
        }
    }

    cout << "YES\n";

    return 0;
}