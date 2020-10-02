#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    priority_queue<int> pq_max;
    priority_queue<int, vector<int>, greater<int>> pq_min;

    int x;
    while(m--)
    {
        cin >> x;
        pq_min.push(x);
        pq_max.push(x);
    }

    int total_min = 0, total_max = 0;
    
    while(n--)
    {
        int t = pq_min.top();
        pq_min.pop();
        total_min += t;

        t--;
        if(t) pq_min.push(t);

        t = pq_max.top();
        pq_max.pop();
        total_max += t;

        t--;
        if(t) pq_max.push(t);
    }

    cout << total_max << " " << total_min << '\n';

    return 0;
}