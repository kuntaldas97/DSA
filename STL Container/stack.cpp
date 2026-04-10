#include <iostream>
#include <stack>
using namespace std;

int main() {

    // Creation of the stack
    stack<int> st;

    // Check if empty
    cout << st.empty() << endl;

    // Insertion
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);   // Stack (top → bottom): 40, 30, 20, 10

    cout << st.empty() << endl;
    cout << st.size() << endl;

    // Access top element
    cout << st.top() << endl;

    // Remove top element
    st.pop();

    // Check top again
    if (!st.empty()) {
        cout << st.top() << endl;
    }

    // Another stack
    stack<int> p;
    cout << p.empty() << endl;

    // Swap stacks
    st.swap(p);

    cout << st.empty() << " " << p.empty() << endl;

    return 0;
}