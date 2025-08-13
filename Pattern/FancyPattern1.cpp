#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number of rows : ";
    cin >>n;
    if (n>9){
        cout << "Please Enter the rows count below 10";
    }
    else{
   for(int i=1; i<=n; i++){
       for (int k=1;k<=n+4-i;k++){
           cout<<"*";
       }
       for (int j=1; j<=i;j++){
           if (j<i){
                cout << i<<"*";
           }
           else {
               cout << i;
           }
       }
       for (int k=1;k<=n+4-i;k++){
           cout<<"*";
       }
       cout << endl;
   }
    }    
}
