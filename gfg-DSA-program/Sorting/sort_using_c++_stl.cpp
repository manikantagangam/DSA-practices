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

// int main()
// {
//     vector<int> v;

//     v = {10, 20, 5, 7};

//     sort(v.begin(), v.end());

//     for (int i = 0; i < v.size(); i++)
//     {
//         cout << v[i] << " ";
//     }
//     cout << endl;

//     sort(v.begin(), v.end(), greater<int>());

//     for (int i = 0; i < v.size(); i++)
//     {
//         cout << v[i] << " ";
//     }
// }

struct Point{
    int x, y;
};

bool myComp(Point p1, Point p2){
    return p1.x < p2.x;
}

ostream& operator<<(ostream& os, const Point& p) {
    os << "(" << p.x << ", " << p.y << ")";
    return os;
}

int main(){
    Point arr[] = {{3, 10}, {2, 8}, {5, 4}};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr, arr+n, myComp);
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}