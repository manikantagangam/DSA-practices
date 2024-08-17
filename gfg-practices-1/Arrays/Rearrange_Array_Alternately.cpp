// Given a sorted array of positive integers. Your task is to rearrange the array elements alternatively i.e first element should be max value, second should be min value, third should be second max, fourth should be second min and so on.
// Note: Modify the original array itself. Do it without using any extra space. You do not have to return anything.

// Input:
// n = 6
// arr[] = {1,2,3,4,5,6}
// Output: 6 1 5 2 4 3
// Explanation: Max element = 6, min = 1,
// second max = 5, second min = 2, and
// so on... Modified array is : 6 1 5 2 4 3.

#include <iostream>
using namespace std;

class Solution
{
public:
    // This function wants you to modify the given input
    // array and no need to return anything
    // arr: input array
    // n: size of array
    // Function to rearrange  the array elements alternately.
    void rearrange(long long *arr, int n)
    {
        int max = arr[n - 1] + 1;
        int mx = n - 1;
        int mn = 0;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                arr[i] = max * (arr[mx] % max) + arr[i];
                mx--;
            }
            else
            {
                arr[i] = max * (arr[mn] % max) + arr[i];
                mn++;
            }
        }

        for (int i = 0; i < n; i++)
        {
            arr[i] = arr[i] / max;
        }
    }
};

int main()
{
    int n;
    cin >> n;
    long long arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    Solution ob;
    ob.rearrange(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}