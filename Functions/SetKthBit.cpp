#include <iostream>

using namespace std;

int main(){
    int n,k;
    cout << "Enter the input :";
    cin >> n;
    cout << "Enter the value of k that to be set : ";
    cin >> k;

    int mask=1<<k;
    int ans = n|k;

    cout << endl<< "The answer after setting the " << k << " bit  is : "<<ans<<endl;
    return 0;
}