#include <iostream>
using namespace std;
int expand(string s, int i, int j){
    int count=0;

    while(i>=0 && j<s.length() && s[i]==s[j]){
        count++;
        i--;
        j++;
    }
    return count;
}
int countSubstrings(string s){
    int totalCount=0;
    for (int center=0; center<s.length(); center++){

        int oddKaAns=expand(s,center,center);

        int evenKaAns=expand(s,center, center+1);

        totalCount=totalCount+oddKaAns+evenKaAns;
    }
    return totalCount;
}

int main(){
    string s;
    cout << "Enter the input String : ";
    cin >> s;
    cout<<endl<<endl;

    int ans = countSubstrings(s);
if(ans<2){
    cout << "Total count of the palindromic substring is : "<<ans<<endl;
}else{
        cout << "Total counts of the palindromic substrings are : "<<ans<< endl;

}
    return 0;
}