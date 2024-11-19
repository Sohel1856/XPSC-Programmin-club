// Date: 19-11-2024 at 18:45 BST
// Link: https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<int> v;
    vector<int> v1;
    vector<int> v3;
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        v3.push_back(x);
    }
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        v1.push_back(x);
        v3.push_back(x);
    }
    // sort(v3.begin(), v3.end());
    // for (auto val : v3)
    // {
    //     cout << val << " ";
    // }

    int ar = 0, br = 0;
    v.push_back(INT_MAX);
    v1.push_back(INT_MAX);
    int i = 0;
    while (ar < n || br < m)
    {
        if (v[ar] < v1[br])
            ans.push_back(v[ar++]);
        else
            ans.push_back(v1[br++]);
    }
    for (auto x : ans)
        cout << x << " ";
    return 0;
}