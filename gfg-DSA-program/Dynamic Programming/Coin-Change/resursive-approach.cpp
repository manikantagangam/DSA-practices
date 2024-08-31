#include<iostream>
using namespace std;

int countWays(int arr[], int n, int s){
    if(s==0){
        return 1;
    }
    if(s<0){
        return 0;
    }
    if(n==0){
        return 0;
    }
    return countWays(arr, n, s-arr[n-1]) + countWays(arr, n-1, s);
}

int main(){
    int arr[] = {1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int s = 4;
    cout<<countWays(arr, n, s)<<endl;
}