#include <iostream>

using namespace std;

void findSequence(string str, string output, int index){
    if (index==str.length()){
        cout <<"->"<< output << endl;
        return;
    }
    char ch=str[index];

    // exclude
    findSequence(str, output, index+1);

    // include
    output.push_back(ch);
    findSequence(str, output, index+1);
}

int main(){

    string str;
    cout << "Enter the input string : ";
    cin >> str;
    string output = "";
    int index=0;   
    findSequence(str, output, index);
    return 0;
}