#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    // Function to find the nth fibonacci number using bottom-up approach.
    long long findNthFibonacci(int number)
    {
        // Your Code Here
        vector<long long int> arr(number + 1);
        arr[0] = 0;
        arr[1] = 1;
        for (int i = 2; i < number + 1; i++)
        {
            arr[i] = arr[i - 1] + arr[i - 2];
        }
        return arr[number];
    }
};

// Time Complexity: O(N)
// Space Complexity: O(N)
int main()
{
    int number;
    cin >> number;
    Solution obj;
    cout << obj.findNthFjsonibonacci(number) << endl;
    return 0;
}