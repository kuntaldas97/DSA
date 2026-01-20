// Sort a Stack
#include <iostream>
#include <stack>

using namespace std;

void insertSorted(stack<int> &st, int temp)
{
    if (st.empty() || temp >= st.top())
    {
        st.push(temp);
        return;
    }
    else
    {
        int topp = st.top();
        st.pop();

        // recursion
        insertSorted(st, temp);

        // backtracking
        st.push(topp);
    }
}

void sortStack(stack<int> &st)
{
    if (st.empty())
    {
        return;
    }

    int temp = st.top();
    st.pop();

    // recursion
    sortStack(st);

    // backtracking
    insertSorted(st, temp);
}

int main()
{
    stack<int> st;

    st.push(9);
    st.push(10);
    st.push(8);
    st.push(12);
    st.push(5);
    st.push(20);

    sortStack(st);

    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}
