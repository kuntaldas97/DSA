#include <iostream>

using namespace std;

// Leet Code :- https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/description/ 
string removeDuplicates(string s){
    string ans="";
    int index=0;

    while(index < s.length()){
        if (ans.length()>0 && ans[ans.length()-1]==s[index]){
            ans.pop_back();
        }else{
            ans.push_back(s[index]);
        }
        index++;
    }
    return ans;
}
int main(){
    string s;
    cout << "Enter the Input String :";
    cin >> s;
    string ans = removeDuplicates(s);
    cout << "After removing all adjacent dupicates : "<<ans<< endl;
    
}