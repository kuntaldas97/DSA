#include <iostream>
#include <stack>
using namespace std;

int getMiddle(stack<int>& st) {
    int size = st.size();

    if (st.empty()) {
        return -1;
    }

    int mid = size / 2;
    stack<int> temp;

    for (int i = 0; i < mid; i++) {
        temp.push(st.top());
        st.pop();
    }

    int middleElement = st.top();

    while (!temp.empty()) {
        st.push(temp.top());
        temp.pop();
    }

    return middleElement;
}

int main() {
    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    int mid = getMiddle(st);
    cout << "Middle Element : " << mid << endl;

    return 0;
}
