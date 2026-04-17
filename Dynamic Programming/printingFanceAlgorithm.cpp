#include <iostream>
#include <vector>
using namespace std;
int solveUsingRec(int n, int k){
    if(n==1) return k;
    if (n==2) return (k+k*(k-1));

    int ans = (solveUsingRec(n-2,k)+solveUsingRec(n-1,k))*(k-1);
    return ans;
}
int solveUsingMem(int n, int k, vector<int>& dp){
    if(n==1) return k;
    if (n==2) return (k+k*(k-1));

    if(dp[n]!=-1){
        return dp[n];
    }

    dp[n] = (solveUsingMem(n-2,k,dp)+solveUsingMem(n-1,k,dp))*(k-1);
    return dp[n];
}
int solveUsingTabulation(int n, int k){
    vector<int>dp(n+1,-1);
    dp[1]=k;
    dp[2]=(k+k*(k-1));

    for(int i =3; i<=n; i++){
        dp[i]=(dp[i-1]+dp[i-2])*(k-1);
    }
    return dp[n];
}
int solveUsingSpaceOPT(int n, int k){
    int prev1 = k;
    int prev2 = (k+k*(k-1));
    if(n==1) return prev1;
    if(n==2) return prev2;
    int curr;
    for(int i=3; i<=n; i++){
        curr = (prev1+prev2)*(k-1);
        prev1=prev2;
        prev2=curr;
    }
    return curr;
}
int main(){
    int n = 1;
    int k = 3;
    vector<int>dp(n+1,-1);

    // int ans = solveUsingMem(n,k,dp);
    int ans = solveUsingSpaceOPT(n,k);
    cout << "Ans "<<ans<<endl;
    return 0;
}