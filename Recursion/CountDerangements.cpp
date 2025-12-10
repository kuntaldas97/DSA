#include <iostream>

using namespace std;
int countDerangements(int n){
    if(n==1)
        return 0;
    if (n==2)
         return 1;

    int ans= (n-1)*(countDerangements(n-2)+countDerangements(n-1));

    return ans;
}
int main(){
    int n;
    cout << "Enter the Input : ";
    cin >> n;

   int ans = countDerangements(n);

   cout << "Derangement Ways = " << ans << endl;
    return 0;
}