// https://codeforces.com/contest/1974/problem/B

#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    cin.ignore();
    string s, sk;
    cin >> s;
    set<char> st;
    for (int i = 0; i < n; i++)
        st.insert(s[i]);
    for (auto x : st)
        sk.push_back(x);
    map<char, char> mp;
    int i = 0, j = sk.size() - 1;
    while (i <= j)
    {
        mp[sk[i]] = sk[j];
        mp[sk[j]] = sk[i];
        i++;
        j--;
    }

    for (int i = 0; i < n; i++)
        s[i] = mp[s[i]];

    cout << s << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int test;
    cin >> test;
    while (test--)
    {
        solve();
    }
    return 0;
}