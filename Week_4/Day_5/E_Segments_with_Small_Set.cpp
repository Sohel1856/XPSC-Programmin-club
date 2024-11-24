// Date: 23-11-2024 at 23:51 BST
// Link: https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/E
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin>> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>> v[i];
    }
    map<int, int> count;
    int l = 0, r = 0;
    long long ans = 0;
    while (r < n)
    {
        count[v[r]]++;
        if (count.size() <= k)
        {
            ans += (r - l + 1);
        }
        else
        {
            while (count.size() > k)
            {
                count[v[l]]--;
                if (count[v[l]] == 0)
                {
                    count.erase(v[l]);
                }
                l++;
            }
            if (count.size() <= k)
                ans += (r - l + 1);
        }
        r++;
    }
    cout<< ans <<endl;

    return 0;
}