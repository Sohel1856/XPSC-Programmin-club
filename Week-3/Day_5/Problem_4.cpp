// Date: 17-11-2024 at 14:42 BST
// Link: https://www.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1
class Solution
{
public:
    long long maximumSumSubarray(vector<int> &a, int k)
    {
        int n = a.size(), l = 0, r = 0;
        long long ans = 0, sum = 0;
        while (r < n)
        {
            sum += a[r];
            if (r - l + 1 == k)
            {
                ans = max(ans, sum);
                sum -= a[l];
                l++, r++;
            }
            else
            {
                r++;
            }
        }
        return ans;
    }
};
