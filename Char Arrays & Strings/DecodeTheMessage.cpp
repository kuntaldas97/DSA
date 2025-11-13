#include <iostream>

using namespace std;

// Leetcode - https://leetcode.com/problems/decode-the-message/description/

string decodeMessage(string key, string message){
    char start='a';
    char mappings[300]={0};

    for(auto ch : key){
        if (ch!=' ' && mappings[ch]==0){
            mappings[ch]=start;
            start++;
        }
    }
    string ans;

    for (auto ch : message){
        if(ch==' '){
            ans.push_back(' ');
        }else{
            ans.push_back(mappings[ch]);
        }
    }
    return ans;
}
int main(){
    string key; 
    string message;
   cout<<"Enter the key : ";
   getline(cin,key);
    cout<<"Enter the message : ";
   getline(cin , message);


   string res= decodeMessage(key,message);

   cout << "The message after dedode is : "+res<<endl;
}