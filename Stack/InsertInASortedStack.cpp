#include <iostream>
#include <stack>

using namespace std;

void insertElm(stack<int> &st, int elm){
    // base case
    if(elm>st.top()){
        st.push(elm);
        elm;
    }
    else{
        int temp=st.top();
        st.pop();
    // recursion
        insertElm(st,elm);
    
    // Backtracking
        st.push(temp);

    }

}
int main(){

    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    int elm;
    cout << "Enter the element to be pushed"<<endl;
    cin >> elm;

    insertElm(st,elm);

    while(!st.empty()){
        cout << st.top()<<" ";
        st.pop();

    }
    return 0;
}