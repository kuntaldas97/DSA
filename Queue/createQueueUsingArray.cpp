#include <iostream>
using namespace std;

class Queue {
public:
    int* arr;
    int size;
    int front;
    int rear;

    Queue(int size) {
        this->size = size;
        arr = new int[size];

        for (int i = 0; i < size; i++) {
            arr[i] = 0;
        }

        front = -1;
        rear = -1;
    }

    // Destructor to prevent memory leak
    ~Queue() {
        delete[] arr;
    }

    void push(int val) {
        // overflow condition
        if (rear == size - 1) {
            cout << "Queue Overflow" << endl;
            return;
        }

        // empty queue
        if (front == -1) {
            front = 0;
            rear = 0;
        } else {
            rear++;
        }

        arr[rear] = val;
    }

    void pop() {
        // underflow
        if (front == -1) {
            cout << "Queue Underflow" << endl;
            return;
        }

        arr[front] = 0;

        // single element
        if (front == rear) {
            front = -1;
            rear = -1;
        } else {
            front++;
        }
    }

    bool isEmpty() {
        return (front == -1);
    }

    int getSize() {
        if (isEmpty()) {
            return 0;
        }
        return rear - front + 1;
    }

    int getFront() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return arr[front];
    }

    int getBack() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return arr[rear];
    }

    void print() {
        cout << "Printing Queue (raw array):" << endl;
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Queue q(5);
    q.print();

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.print();

    q.push(60);   // overflow

    cout << "Current size of the queue is : " << q.getSize() << endl;

    q.pop();
    q.pop();
    q.print();

    cout << "Current size of the queue is : " << q.getSize() << endl;
    cout << "Front = " << q.getFront()
         << ", Back = " << q.getBack() << endl;

    q.pop();
    q.pop();
    q.pop();   // underflow
    q.print();

    cout << "Current size of the queue is : " << q.getSize() << endl;

    return 0;
}
