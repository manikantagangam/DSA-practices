#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// int main()
// {
//     int arr[] = {10, 20, 5, 7};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     sort(arr, arr + n);
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     sort(arr, arr + n, greater<int>());
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

int main()
{
    vector<int> v;

    v = {10, 20, 5, 7};

    sort(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    sort(v.begin(), v.end(), greater<int>());

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}