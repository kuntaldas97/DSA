#include <iostream>
using namespace std;
// Calculating GCD using uclide algorithm.
int calculateGCD(int a, int b){
    if (a==0){
        return b;
    }
    if(b==0){
        return a;
    }
    while (a>0 && b>0){
        if (a>b){
            a=a-b;
        }else{
            b=b-a;
        }
    }
    return a==0 ? b:a;
}
int calculateLCD(int a , int b){
    int gcd=calculateGCD(a,b);
    int ans= (a*b)/gcd;

    return ans;

}

int main(){
    int a, b;
    cout << "Enter the value of a and b "<<endl;
    cin >> a >> b;

    int ans1=calculateGCD(a,b);
    cout << "The GCD of "<< a << " and " << b << " is : "<< ans1 << endl;

    int ans2=calculateLCD(a,b);
    cout << "The LCD of "<< a << " and " << b << " is : "<< ans2 << endl;

    return 0;
}