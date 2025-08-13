#include<iostream>
#include <limits.h>
using namespace std;

void PrintAllPrime(int input){
    for (int i=2; i<=input; i++){
        bool flag=1;
        for (int j=2; j<i;j++){
            if (i%j==0){
                flag=0;
            }
        }
        if (flag==1){
            cout << i << " ";
        }
    }
    cout << endl;
}
int main(){
   float number;    
   cout<<"The Prime Numbers in the range : ";
   cin >> number;
   
   if (number<0) {
       cout << "Please enater a positive integer :"<< endl; 
   }
   else{
   
   PrintAllPrime(number);
   }
   return 0;
}   
