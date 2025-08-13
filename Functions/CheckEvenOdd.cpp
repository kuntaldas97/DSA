// Check a number if it’s odd or even : 

#include<iostream>
#include <limits.h>
using namespace std;

bool checkEvenOdd(int number){
    if (number%2==0){
        return true;
    }
    else{
        return false;
    }
}

int main(){
   float number;
   cout<<"Enter the Number : ";
   cin >> number;
   bool isEven=checkEvenOdd(number);
   
   if (isEven){
       cout << number << " is a even number"<< endl; 
       
   }
   else{
        cout << number << " is a odd number"<< endl; 
   }
   
   return 0;
}   
