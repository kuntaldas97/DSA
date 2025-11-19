#include <iostream>
using namespace std;
// https://www.geeksforgeeks.org/problems/modular-exponentiation-for-large-numbers5537/1


int fastExponentiation(int a, int b){
    int ans=1;
    while(b>0){
        if(b&1){
            // b is a odd number
            ans=ans*a;
        }
        a=a*a;
        b=b/2;
    }
    return ans;
}

int main(){
    int a,b;
    cout << "Enter the inputs :"<< endl;
    cin >> a >> b;
    int ans=fastExponentiation(a,b);
    cout << "The fast exponentiation of "<<a<<" and "<<b << " is : "<< ans<< endl;
    return 0;
}
