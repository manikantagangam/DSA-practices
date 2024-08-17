// Given a sorted array with possibly duplicate elements. The task is to find indexes of first and last occurrences of an element X in the given array.

// Note: If the element is not present in the array return {-1,-1} as pair.

// Example 1:
// Input:
// N = 9
// v[] = {1, 3, 5, 5, 5, 5, 67, 123, 125}
// X = 5
// Output:
// 2 5
// Explanation:
// Index of first occurrence of 5 is 2
// and index of last occurrence of 5 is 5.

// Example 2:
// Input:
// N = 9
// v[] = {1, 3, 5, 5, 5, 5, 7, 123, 125}
// X = 7
// Output:
// 6 6

class Solution
{
public:
    pair<long, long> indexes(vector<long long> v, long long x)
    {
        long firstIdx = first(v, x);
        long lastIdx = last(v, x);

        return make_pair(firstIdx, lastIdx);
    }

    long first(vector<long long> v, long long x)
    {
        long l = 0;
        long r = v.size() - 1;
        long res = -1;

        while (l <= r)
        {
            long m = l + (r - l) / 2;

            if (v[m] == x)
            {
                res = m;
                r = m - 1;
            }
            else if (v[m] > x)
            {
                r = m - 1;
            }
            else
            {
                l = m + 1;
            }
        }
        return res;
    }

    long last(vector<long long> v, long long x)
    {
        long l = 0, r = v.size() - 1, res = -1;

        while (l <= r)
        {
            long m = l + (r - l) / 2;

            if (v[m] == x)
            {
                res = m;
                l = m + 1;
            }
            else if (v[m] > x)
            {
                r = m - 1;
            }
            else
            {
                l = m + 1;
            }
        }
        return res;
    }
};