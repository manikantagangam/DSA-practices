class Solution
{
public:
    vector<int> replaceElements(vector<int> &arr)
    {
        int rightMax = -1;
        int newMax;

        for (int i = arr.size() - 1; i >= 0; i--)
        {
            newMax = max(rightMax, arr[i]);
            arr[i] = rightMax;
            rightMax = newMax;
        }

        return arr;
    }
};