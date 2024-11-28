// Date: 25-11-2024 at 13:13 BST
// Link:
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int lenOfLongestSubarr(vector<int> &arr, int k)
    {
        unordered_map<int, int> mp;
        int sum = 0;
        int lenght = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            sum += arr[i];
            if (sum == k)
            {
                lenght = i + 1;
            }
            else if (mp.find(sum - k) != mp.end())
            {
                lenght = max(lenght, i - mp[sum - k]);
            }
            if (mp.find(sum) == mp.end())
            {
                mp[sum] = i;
            }
        }
        return lenght;
    }
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int k;
    cin >> k;
    Solution sl;
    cout << sl.lenOfLongestSubarr(arr, k);
    return 0;
}