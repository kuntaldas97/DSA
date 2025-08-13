// Find Factorial of a Number : 

#include<iostream>
#include <limits.h>
using namespace std;

int findFactorial(int input){
    int fact=1; 
    for (int i=input; i>=1; i--){
        fact=fact*i;
    }
    return fact;
}
int main(){
   float number;
   cout<<"Enter the Number : ";
   cin >> number;
   
   if (number<0) {
       cout << "Please enater a positive integer :"<< endl; 
   }
   else{
   
   int Fact = findFactorial(number);
   
   cout<< "The factorial of "<<number<< " is : "<<Fact << endl;
   }
   return 0;
}   
