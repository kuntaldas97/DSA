#include <iostream>
#include <limits.h>
// https://leetcode.com/problems/edit-distance/

using namespace std;
int solve(string &word1, string &word2, int i, int j){

    // base cases 
    if (i>=word1.length()){
        // word1 ka length complete ho gaya .
        return word2.length()-j;
    }
    if (j>=word2.length()){
        // word1 ka length complete ho gaya .

        return word1.length()-i;
    }
    int ans=0;
    // when the character are matching 
    if (word1[i]==word2[j]){
        ans= 0+solve(word1,word2,i+1,j+1);
    }else{
        // not match
        // we can do three operation
        // insert
        int option1=1+solve(word1,word2,i,j+1);
        // remove
        int option2=1+solve(word1,word2,i+1,j); 
        // replace
        int option3=1+solve(word1,word2,i+1,j+1);

        ans=min(option1,min(option2,option3));
    }
    return ans;
}

int minDistance(string word1, string word2){
    int i=0;
    int j=0;
    int ans =solve(word1, word2, i, j);

    return ans;
}
int main(){
string word1, word2;

cout << "Enter the word-1 and word-2 : "<< endl;
cin >> word1 >> word2 ;

int ans = minDistance(word1, word2);

cout << "The minimum number of operation required to convert word-1 to word-2 is : "<<ans<<endl<<endl;
    return 0;
}