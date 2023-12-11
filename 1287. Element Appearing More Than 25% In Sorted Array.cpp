class Solution
{
public:
    int findSpecialInteger(vector<int> &arr)
    {
        int q = arr.size() / 4;
        for (int i = 0; i < arr.size() - q; i++)
        {
            if (arr[i] == arr[i + q])
            {
                return arr[i];
            }
        }
        return -1;
    }
};