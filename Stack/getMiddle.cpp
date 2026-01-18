#include <iostream>
#include <stack>
using namespace std;

void solve(stack<int> &st, int pos, int &ans){
    // Handling the base case
    if(pos==1){
        ans=st.top();
        return;
    }
    // solving one case
    pos--;
    int temp=st.top();
    st.pop();
    // Recursion
    solve(st,pos,ans);
    // Backtracking
    st.push(temp);
}

int getMiddle(stack<int>& st) {
    int size = st.size();
    int pos;
    if (st.empty()) {
        return -1;
    }
    else{
        pos=0;
        // stack is non empty
        // odd
        if(size&1){
            pos=(size/2)+1;
        }
        else{
            // evem
            pos=size/2;
        }
    }
    int ans=-1;
    solve(st,pos,ans);
    return ans;
}

int main() {
    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);

    int mid = getMiddle(st);
    cout << "Middle Element : " << mid << endl;
    return 0;
}
