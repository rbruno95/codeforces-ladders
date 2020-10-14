#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<pair<int,int>> vp(n);
    for(int i=0;i<n;++i)
    {
        cin >> vp[i].first;
        vp[i].second = i;
    }

    sort(vp.begin(), vp.end());

    vector<pair<int,int>> sol;

    for(int i=0;i<n;++i)
    {
        int diff = 0;
        for(int j=i+1;j<n;++j)
        {

            if(vp[j].first == vp[j-1].first)
            {
                if(vp[j].second - vp[j-1].second != diff)
                {
                    if(diff > 0)                    
                        diff = -1;
                    else if(!diff)
                        diff = vp[j].second - vp[j-1].second;
                }                
            }
            else
            {
                i = j-1;
                break;
            }        
            if(j == n-1)            
                i = j;                
            
        }
        if(diff >= 0)
            sol.push_back(make_pair(vp[i].first, diff));
    }

    cout << sol.size() << '\n';
    for(int i=0;i<sol.size();++i)
        cout << sol[i].first << " " << sol[i].second << '\n';

    return 0;
}