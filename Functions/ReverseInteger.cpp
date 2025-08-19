#include <iostream>
#include <limits.h>

using namespace std;

int reverseInteger(int x){
    int ans = 0; // Initialize the reversed number to 0
        while (x != 0) {
            int digit = x % 10; // Get the last digit of x
            
            // Check for overflow/underflow before updating ans
            if ((ans > INT_MAX / 10) || (ans < INT_MIN / 10)) {
                return 0; // Return 0 if reversing x would cause overflow/underflow
            }
            
            ans = ans * 10 + digit; // Append the digit to the reversed number
            x = x / 10; // Remove the last digit from x
        }
        return ans; // Return the reversed number
}

int main(){
    int n;
    cout << "Enter the Integer to be reversed : ";
    cin >> n;

    int ans=reverseInteger(n);

    cout << endl <<"The answer is : "<< ans << endl;
    return 0;
}