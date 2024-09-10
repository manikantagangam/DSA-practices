#include<iostream>
using namespace std;

// bottom-up approach
/*

    C U T
  0 1 2 3
C 1 0 1 2
A 2 1 1 2
T 3 2 2 1

*/

int eD(string s1, string s2, int m, int n){
    int dp[m+1][n+1];
    for(int i = 0; i<m+1; i++){
        dp[i][0] = i;
    }
    for(int j = 0; j<n+1; j++){
        dp[0][j] = j;
    }
    for(int i = 1; i<m+1; i++){
        for(int j = 1; j<n+1; j++){
            if(s1[i] == s2[j]){
                dp[i][j] = dp[i-1][j-1];
            }
            else{
                dp[i][j] = 1 + min(dp[i][j-1], min(dp[i-1][j], dp[i-1][j-1]));
            }
        }
    }
    return dp[m][n];
}

int main(){
    string s1 = "CAT";
    string s2 = "CUT";
    
    int m = s1.length();
    int n = s2.length();
    
    cout<<eD(s1, s2, m, n)<<endl;
}