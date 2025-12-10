#include <iostream>

using namespace std;

int printFance(int n, int k){

    if (n==1){
        return k;
    }
    if(n==2){  
        return k+k*(k-1);
    }
    int ans = (k-1)*(printFance(n-1,k)+printFance(n-2, k));
return ans;
    
}

int main(){

    int n,k;
    cout <<"Enter total no of fance and the color available : "<<endl;

    cin >> n >> k;

    int ans = printFance(n,k);
cout << ans << endl;
    return 0;
}