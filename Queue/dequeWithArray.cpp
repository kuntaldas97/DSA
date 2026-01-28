// Deque implementation using Array

#include <iostream>
using namespace std;

class Deque {
    int* arr;
    int size;
    int front;
    int rear;

public:
    Deque(int size) {
        this->size = size;
        arr = new int[size];

        for (int i = 0; i < size; i++) {
            arr[i] = 0;
        }

        front = -1;
        rear = -1;
    }

    ~Deque() {
        delete[] arr;
    }

    bool isFull() {
        return ((rear + 1) % size == front);
    }

    bool isEmpty() {
        return (front == -1);
    }

    void push_back(int val) {
        if (isFull()) {
            cout << "OverFlow" << endl;
            return;
        }

        if (isEmpty()) {
            front = rear = 0;
        }
        else if (rear == size - 1) {
            rear = 0;
        }
        else {
            rear++;
        }

        arr[rear] = val;
    }

    void push_front(int val) {
        if (isFull()) {
            cout << "OverFlow" << endl;
            return;
        }

        if (isEmpty()) {
            front = rear = 0;
        }
        else if (front == 0) {
            front = size - 1;
        }
        else {
            front--;
        }

        arr[front] = val;
    }

    void pop_front() {
        if (isEmpty()) {
            cout << "Underflow" << endl;
            return;
        }

        arr[front] = 0;

        if (front == rear) {
            front = rear = -1;
        }
        else if (front == size - 1) {
            front = 0;
        }
        else {
            front++;
        }
    }

    void pop_back() {
        if (isEmpty()) {
            cout << "Underflow" << endl;
            return;
        }

        arr[rear] = 0;

        if (front == rear) {
            front = rear = -1;
        }
        else if (rear == 0) {
            rear = size - 1;
        }
        else {
            rear--;
        }
    }

    void print() {
        cout << " Printing Deque : ";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Deque dq(5);

    dq.push_back(10);
    dq.push_back(20);
    dq.push_front(5);
    dq.push_back(30);
    dq.print();

    dq.pop_front();
    dq.pop_back();
    dq.print();

    dq.push_front(40);
    dq.push_back(50);
    dq.print();

    return 0;
}
