#include <iostream>
#include <stack>

using namespace std;
bool checkRedundant(string &input){
    stack<char> st;

    for(int i=0; i<input.length(); i++){
        char ch = input[i];

        if(ch=='('||ch=='+'||ch=='-'||ch=='*'||ch=='/'){
            st.push(ch);
        }
        else if(ch==')'){
            int operatorCount=0;
            while(!st.empty() && st.top()!='('){
            // checking how many operator present and deleting from the stack
            char temp = st.top();
            if(temp=='+'||temp=='-'||temp=='*'||temp=='/'){
            operatorCount++;
            }
            st.pop();
            }
            // out of the loop meaning '(' bracekt found and deleting 
            st.pop();
        
            // if operator count is zero then redundant brackets are present
            if(operatorCount==0){
                return true;
            }
        }
    }
    // out of the loop means no redundant bracket is present
    return false;
}

int main(){
    cout<<"Enter the input to be checked"<<endl;
    string input;
    cin >> input;

    bool ans=checkRedundant(input);

    if(ans==true){
        cout<<"Redundant bracket is present"<<endl;
    }
    else{
        cout<<"Redundant bracket is not present"<<endl;
    }

    return 0;
}