#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i=0;i<n;++i)
        cin >> v[i];
    
    if(is_sorted(v.begin(), v.end())) 
    {
        cout << "yes\n1 1\n"; 
        return 0;
    }

    int left = -1;
    for(int i=0;i<n-1;++i)
    {
        if(v[i] > v[i+1])
        {
            left = i;
            break;
        }
    }

    int right = -1;
    for(int i=n-1;i>0;i--)
    {
        if(v[i] < v[i-1])
        {
            right = i;
            break;
        }
    }
    
    reverse(v.begin()+left, v.begin()+right+1);

    if(is_sorted(v.begin(), v.end()))
        cout << "yes\n" <<left+1 << ' ' << right+1 << '\n';
    else cout << "no" << '\n';        

    return 0;
}