#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;

    string queue;
    cin >> queue;

    while(t--)
    {
        for(int i=0;i<n;++i)
            if(queue[i] == 'B' and (i+1 < n and queue[i+1] == 'G')) 
            {
                swap(queue[i], queue[i+1]);        
                i++;
            }
    }

    cout << queue << '\n';;;;

    return 0;
}