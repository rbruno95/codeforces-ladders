#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int zeros = 0, fives = 0;
    int x;

    while(n--)
    {
        cin >> x;
        if(x) fives++;
        else zeros++;
    }

    fives = (fives / 9) * 9;

    if(fives and zeros)
    {
        for(int i=0;i<fives;++i) cout << 5;
        for(int i=0;i<zeros;++i) cout << 0;
    } 
    else if(zeros) cout << 0;
    else cout << -1;
    
    cout << '\n';

    return 0;
}