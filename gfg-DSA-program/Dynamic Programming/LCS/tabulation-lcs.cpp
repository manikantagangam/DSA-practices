#include<iostream>
#include<vector>
using namespace std;
/*

Initialized dp array be like:
N : represents NULL Values
 
   0  B  A  Z
0 [0, 0, 0, 0]
A [0, N, N, N]
X [0, N, N, N]
Y [0, N, N, N]
Z [0, N, N, N]

*/

int lcs(string s1, string s2, int m, int n){
    vector<vector<int> > dp(m+1, vector<int>(n));
    
    for(int i = 0; i<m+1; i++){
        dp[i][0] = 0;
    }
    for(int i = 0; i<n+1; i++){
        dp[0][i] = 0;
    }
    
    for(int i = 1; i<m+1; i++){
        for(int j = 1; j<n+1; j++){
            if(s1[i-1] == s2[j-1]){
                dp[i][j] = 1 + dp[i-1][j-1];
            }
            else{
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }
    return dp[m][n];
}

int main(){
    string s1 = "AXYZ"; 
    string s2 = "BAZ";
    
    int m = s1.length(); //4
    int n = s2.length(); //3
    
    cout<<lcs(s1, s2, m, n)<<endl;
}