#include <iostream>

using namespace std;

void printPermutation(string &str, int index){

    if(index>=str.length()){
        cout << str << " ";
        return;
    }
    for(int j=index; j<str.length(); j++){
        // getting all the possinble cases
        swap(str[index],str[j]);
        // recursion 
        printPermutation(str,index+1);
        // for handling copy by reference 
        swap(str[index],str[j]);
    }
}

int main(){
    string str = "abc";
    int i = 0;

    printPermutation(str, i);

    cout << endl;

    return 0;
}