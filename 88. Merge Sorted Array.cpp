class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        int f = 0, s = 0;
        vector<int> ans(m + n, 0);
        for (int i = 0; i < m + n; i++)
        {
            if (f < m && (s >= n || nums1[f] <= nums2[s]))
            {
                ans[i] = nums1[f];
                f++;
            }
            else
            {
                ans[i] = nums2[s];
                s++;
            }
        }

        nums1.swap(ans);
    }
};
