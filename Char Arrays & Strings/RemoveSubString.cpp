#include <iostream>

// Leet Code :- https://leetcode.com/problems/remove-all-occurrences-of-a-substring/
using namespace std;
string removeOccurance(string s, string part){

    while(s.find(part)!=string::npos){
        s.erase(s.find(part), part.length());
    }
    return s;
}
int main(){
    string input, part;
    cout << "Enter the input string  and sub string : "<<endl;
    cin >> input>>part; 

    string ans=removeOccurance(input, part);
    cout << "After removing all the common string the ans is : "<< ans<<endl;
}