#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of rows \n";
    cin >>n;

    for (int i=1; i<=n ;i++){
        for (int j=1; j<=n;j++){
            if (j==1){
                cout << i;
            }
            else if (i==1){
                cout<<j;
            }
            else if(i+j-1==n){
                cout << n;
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
}

