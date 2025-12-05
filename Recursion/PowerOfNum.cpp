#include <iostream>

using namespace std;
int pow(int num, int n){
    int finalAns;
    if (n==0){
        return 1;
    }
    else{
    finalAns= num*pow(num,n-1); 
}
return finalAns;
}

int main(){

    int num, n;
    cout << "Enter then number and the power : "<< endl;
    cin >> num >> n;

    int ans=pow(num, n);
    cout << ans << endl;

    return 0; 
}