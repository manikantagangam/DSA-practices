#include<iostream>
using namespace std;

int shortestCommonSupersequence(string X, string Y, int m, int n){
    int dp[m+1][n+1];
    for(int i = 0; i<m+1; i++){
        dp[i][0] = 0;
    }
    for(int j = 0; j<n+1; j++){
        dp[0][j] = 0;
    }
    
    for(int i = 1; i<m+1; i++){
        for(int j = 1; j<n+1; j++){
            if(X[i-1] == Y[j-1]){
                dp[i][j] = 1 + dp[i-1][j-1];
            }
            else{
                dp[i][j] = max(dp[i][j-1], dp[i-1][j]);
            }
        }
    }
    int l = dp[m][n];
    return l+(m-l)+(n-l);
}

int main(){
    string X = "abcd";
    string Y = "xycd";

    int m = X.length();
    int n = Y.length();

    cout<<shortestCommonSupersequence(X, Y, m, n)<<endl;
}