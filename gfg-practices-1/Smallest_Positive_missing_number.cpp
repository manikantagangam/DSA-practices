// You are given an array arr[] of N integers. The task is to find the smallest positive number missing from the array.

// Note: Positive number starts from 1.

// Example 1:
// Input:
// N = 5
// arr[] = {1,2,3,4,5}
// Output: 6
// Explanation: Smallest positive missing
// number is 6.

// Example 2:
// Input:
// N = 5
// arr[] = {0,-10,1,3,-20}
// Output: 2
// Explanation: Smallest positive missing
// number is 2.

class Solution
{
public:
    // Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n)
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] <= 0)
                arr[i] = n + 1;
        }

        for (int i = 0; i < n; i++)
        {
            int ele = abs(arr[i]);

            if (ele >= n + 1)
            {
                continue;
            }

            int index = ele - 1;

            if (arr[index] > 0)
                arr[index] = arr[index] * (-1);
        }

        for (int i = 0; i < n; i++)
        {
            if (arr[i] > 0)
                return i + 1;
        }

        return n + 1;
    }
};

// Time Complexity: O(N).
// Auxiliary Space: O(1).