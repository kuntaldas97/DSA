#include <iostream>
#include <stack>

using namespace std;

void insertAtBottom(stack<int> &st, int elm){
    int pos=st.size();

    // base case
    if (pos==0){
        st.push(elm);
        cout << "The bottom element is : "<< st.top()<<endl;
        return;
    }
    
    // solving 1 case
    cout << "current top : " << st.top()<<endl;
    pos--;
    int temp=st.top();
    st.pop();

    // recursion 
    insertAtBottom(st,elm);

    // backtracking
    st.push(temp);
}

int main(){

    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);
    cout<<st.top()<<endl;
    cout << st.size()<<endl;
    int elm;
    cout << "Enter the element to be pushed at the bottom!"<<endl;
    cin >> elm;
    insertAtBottom(st,elm);
    return 0;
}