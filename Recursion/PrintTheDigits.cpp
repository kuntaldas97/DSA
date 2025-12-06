#include <iostream>
#include <vector>
using namespace std;
vector<int> printDigits(int n){
    vector <int> ans;
    vector <int> nextAns;
if (n==0){
    ans.push_back(0);
    return ans;
}
int rem=n%10;
n=n/10;
if (n>0){
nextAns=printDigits(n);
ans.insert(ans.end(), nextAns.begin(),nextAns.end());
}
ans.push_back(rem);
return ans;
}
int main(){

    int input;
cout<< "Enter the input : ";
cin >> input ;
vector <int> ans;

ans=printDigits(input);

for (auto digit : ans){
    cout << digit << " ";
}
cout << endl;


    return 0;
}