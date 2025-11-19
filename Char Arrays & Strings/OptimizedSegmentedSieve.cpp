#include <iostream>
#include <vector>
using namespace std;

vector<bool> Sieve(int n){
 vector <bool> sieve(n+1, true);
 sieve[0]=sieve[1]=false;

 for(int i=2; i*i<n; i++){
    if(sieve[i]==true){
        int j=i*i;
        while(j<n){
            sieve[j]=false;
            j+=i;
        }
    }
 }
 return sieve;
}

int main(){
    int n;
    cout << "Enter the range : ";
    cin >> n;
    vector<bool> ans = Sieve(n);
    for(int i=0; i<n; i++){
        if(ans[i]){
            cout << i<< " ";
        }
    }
cout<<endl;
    return 0;
}