#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    int n;
    cin >> n;

    vector<pair<int,int>> cards(2*n);
    for(int i=0;i<2*n;++i)
    {
        cin >> cards[i].first;
        cards[i].second = i+1;
    }

    sort(cards.begin(), cards.end());

    bool can = true;
    for(int i=0;i<n and can;++i)
        if(cards[2*i].first != cards[2*i+1].first)
            can = false;
    
    if(can)
        for(int i=0;i<n;++i)
            cout << cards[2*i].second << " " << cards[2*i+1].second << '\n';
    
    else cout << -1 << '\n';
        
    return 0;
}