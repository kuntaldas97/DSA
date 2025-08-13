// Display the area of a Circle:

#include<iostream>
#include <limits.h>
using namespace std;

void calculateArea(float radius){
    float area = 3.14*radius*radius;
    
    cout << "The area of the circle is : "<<area<< endl;
}

int main(){
   float radius;
   cout<<"Enter the radius of the circle : ";
   cin >> radius;
   
   calculateArea(radius);
}   
