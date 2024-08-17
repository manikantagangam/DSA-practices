#include <iostream>
#include <cmath>
using namespace std;

int avgOfString(string s)
{
    // Your code here
    int sum = 0;
    for (char c : s)
    {
        sum += static_cast<int>(c);
    }
    double average = static_cast<double>(sum) / s.length();
    return static_cast<int>(floor(average));
}

int main()
{
    string s = "geeksforgeeks";
    cout << avgOfString(s) << endl;
    return 0;
}