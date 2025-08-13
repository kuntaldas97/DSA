#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number of rows : ";
    cin >>n;
    
    for (int i=1; i<=n; i++){
       for (int j=1; j<=n/2; j++){
           if((j<=i && i<=n/2) ||(i+j<=n && i>n/2)){
           cout <<"* ";
            } 
        }
        cout << endl;
    }
        
}
