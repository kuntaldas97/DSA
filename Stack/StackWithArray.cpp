// Stack - Data Structure
// Stores elements in LIFO (Last In First Out) order
// Underflow: removing element from empty stack
// Overflow : inserting element into full stack
// <stack> header is used for STL stack

#include <iostream>
#include <stack>
using namespace std;

class Stack {
public:
    int* arr;
    int size;
    int top;

    // Constructor
    Stack(int size) {
        arr = new int[size];
        this->size = size;
        this->top = -1;
    }

    // Push operation
    void push(int data) {
        if (top == size - 1) {
            cout << "Stack Overflow" << endl;
            return;
        }
        top++;
        arr[top] = data;
    }

    // Pop operation
    void pop() {
        if (top == -1) {
            cout << "Stack is empty" << endl;
            return;
        }
        top--;
    }

    // Check if stack is empty
    bool isEmpty() {
        return top == -1;
    }

    // Get top element
    int getTop() {
        if (top == -1) {
            cout << "Stack is empty" << endl;
            return -1;
        }
        return arr[top];
    }

    // Get current size of stack
    int getSize() {
        return top + 1;
    }

    // Print stack
    void print() {
        if (top == -1) {
            cout << "Stack is empty" << endl << endl;
            return;
        }

        cout << "Top Index: " << top << endl;
        cout << "Top Element: " << getTop() << endl;
        cout << "Stack: ";

        for (int i = 0; i < getSize(); i++) {
            cout << arr[i] << " ";
        }
        cout << endl << endl;
    }
};

int main() {
    // Stack object creation
    Stack st(8);

    st.push(5);
    st.print();

    st.push(10);
    st.print();

    st.push(15);
    st.print();

    st.pop();
    st.print();

    st.pop();
    st.print();

    st.pop();
    st.print();

    st.pop();
    st.print();

    return 0;
}
