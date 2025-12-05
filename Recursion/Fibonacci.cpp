#include <iostream>

// https://leetcode.com/problems/climbing-stairs/

using namespace std;
int fibonacci(int n){
    int ans;
    if(n==0){
        ans=0;
    }
    else if(n==1){
        ans=1;
    }
    else{
        ans=fibonacci(n-1)+fibonacci(n-2);
    }
    return ans;
}
int main(){

    int n;
    cout << "Enter the nth position : ";
    cin >> n;

    int ans=fibonacci(n);

    cout << ans <<endl;

    return 0;
}