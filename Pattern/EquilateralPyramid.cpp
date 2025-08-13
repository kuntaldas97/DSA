#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number of rows : ";
    cin >>n;
    
    for (int i=1; i<=n; i++){
        for (int j=1; j<=n; j++){
            if ((i+j)>n){
                cout << i+j-n ;
            }
            else{
                cout << " ";
            }
        }
        for (int j=1; j<=n; j++){
            if (i>j){
                cout << i-j ;
            }
            else{
                cout << " ";
            }
        }
        cout<<endl;
    }
}
