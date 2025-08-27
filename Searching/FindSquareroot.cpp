#include <iostream>
#include <vector> 

using namespace std;
int findSquareroot(int n){
    int start=0;
    int end=n;
    int mid;
    int ans;
    while(start<=end){
        mid=start+(end-start)/2;

        if (mid*mid<=n){
            ans=mid;
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
 return ans;
}
int main(){
    int n;
    cout << "Enter the input : "<< endl;
    cin >> n;

    int ans=findSquareroot(n);

    cout << ans << endl;
    return 0;
}