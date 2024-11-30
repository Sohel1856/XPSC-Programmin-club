#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        priority_queue<long long> pq;
        vector<long long> even;
        for (int i = 0; i < n; i++)
        {
            long long a;
            cin >> a;
            if (a % 2 != 0)
            {
                pq.push(a);
            }
            else
            {
                even.push_back(a);
            }
        }
        if (pq.size() == n || even.size() == n)
        {
            cout << "0\n";
            continue;
        }
        sort(even.begin(), even.end());
        long long ans = 0;
        int i = 0;
        long long max_ans = 0;
        if (pq.top() < even[even.size() - 1])
        {
            max_ans += (even.size() + 1);
        }
        else
        {
            max_ans += even.size();
        }
        while (i < even.size())
        {
            long long tp = pq.top();
            if (tp > even[i])
            {
                pq.push(tp + even[i]);
                ans++;
            }
            else
            {
                pq.push(tp + even[i]);
                ans += 2;
            }
            i++;
        }
        cout << min(ans, max_ans) << endl;
    }
    return 0;
}
