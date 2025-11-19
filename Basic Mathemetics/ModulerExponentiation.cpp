#include <iostream>
using namespace std;
// https://www.geeksforgeeks.org/problems/modular-exponentiation-for-large-numbers5537/1
// Given three integers x, n, and M, compute (x^n) % M, i.e., the remainder when x raised to the power n is divided by M.

int modulerExponentiation(long long int x, long long int n, long long int M){
    long long int ans=1;
    while(n>0){
        if (n&1){
            // when n is a odd number
            ans=(ans*x)%M;
        }
        x=(x*x)%M;
        n>>=1;
    }
    return ans%M;
}
int main(){

    long long int x,n,M;
    cout << "Enter the value of x, n and M :"<<endl;
    cin>>x>>n>>M;

    int ans=modulerExponentiation(x,n,M);
    cout << "The ans is : "<<ans<<endl;
    return 0;
}