#include<iostream>
#include <limits.h>
using namespace std;

bool checkPrime(int input){
    bool flag=true;
    for (int i=2; i<input; i++){
        if (input%i==0){
            flag=false;
            break;
        }
    }
    return flag;
}
int main(){
   float number;    
   cout<<"Enter the Number : ";
   cin >> number;
   
   if (number<0) {
       cout << "Please enater a positive integer :"<< endl; 
   }
   else{
   
   bool isPrime=checkPrime(number);
   if (isPrime){
       cout << number<<" is a prime number."<< endl;
        }
    else{
        cout << number << " is a non prime number."<< endl;
    }
   }
   return 0;
}   
