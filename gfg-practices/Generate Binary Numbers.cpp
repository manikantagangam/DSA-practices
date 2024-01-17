// Given a number N. The task is to generate and print all binary numbers with decimal values from 1 to N.

// Example 1:
// Input:
// N = 2
// Output:
// 1 10
// Explanation:
// Binary numbers from
// 1 to 2 are 1 and 10.

// Example 2:
// Input:
// N = 5
// Output:
// 1 10 11 100 101
// Explanation:
// Binary numbers from
// 1 to 5 are 1 , 10 , 11 , 100 and 101.

vector<string> generate(int N)
{
    // Your code here
    vector<string> v;
    queue<string> q;
    q.push("1");
    for (int count = 0; count < N; count++)
    {
        string curr = q.front();
        v.push_back(curr);
        q.pop();
        q.push(curr + "0");
        q.push(curr + "1");
    }
    return v;
}