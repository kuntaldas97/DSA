#include <iostream>
#include <stack>

using namespace std;
void insertAtBottom(stack<int> &st, int bottom)
{
    // base case hit
    if (st.empty())
    {
        st.push(bottom);
        return;
    }
    // solve 1 case
    int temp = st.top();
    st.pop();
    // recursion
    insertAtBottom(st, bottom);

    // backtrack
    st.push(temp);
}
void reverseStack(stack<int> &st)
{
    if (st.empty())
    {
        return;
    }
    int bottom = st.top();
    st.pop();
    // recursion
    reverseStack(st);
    // backtrack
    insertAtBottom(st, bottom);    
}

int main()
{

    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    reverseStack(st);

    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}