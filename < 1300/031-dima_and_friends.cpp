#include <bits/stdc++.h>

using namespace std;

int main()
{   
    int n;
    cin >> n;

    int x, fingers = 0;
    
    for(int i=0;i<n;++i)
    {
        cin >> x;
        fingers += x;
    }
     
    fingers = fingers % (n+1);
    
    int counter = 0;
    for(int i=1;i<=5;++i)
        counter += ((i + fingers) % (n+1) != 1);
    
    cout << counter << '\n';

    return 0;
}