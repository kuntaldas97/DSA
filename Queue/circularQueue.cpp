#include <iostream>
using namespace std;

class CQueue {
public:
    int* arr;
    int size;
    int front;
    int rear;

    CQueue(int size) {
        this->size = size;
        arr = new int[size];

        for (int i = 0; i < size; i++) {
            arr[i] = 0;
        }

        front = -1;
        rear = -1;
    }

    // Destructor to avoid memory leak
    ~CQueue() {
        delete[] arr;
    }

    void push(int val) {
        // Overflow condition
        if ((rear + 1) % size == front) {
            cout << "Queue Overflow" << endl;
            return;
        }

        // Empty queue
        if (front == -1) {
            front = 0;
            rear = 0;
            arr[rear] = val;
        }
        // Circular case
        else if (rear == size - 1) {
            rear = 0;
            arr[rear] = val;
        }
        // Normal case
        else {
            rear++;
            arr[rear] = val;
        }
    }

    void pop() {
        // Underflow
        if (front == -1) {
            cout << "Queue Underflow" << endl;
            return;
        }

        // Single element
        if (front == rear) {
            arr[front] = 0;
            front = -1;
            rear = -1;
        }
        // Circular case
        else if (front == size - 1) {
            arr[front] = 0;
            front = 0;
        }
        // Normal case
        else {
            arr[front] = 0;
            front++;
        }
    }

    void print() {
        cout << "Printing Queue : " << endl;
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    CQueue cq(5);

    cq.print();

    cq.push(10);
    cq.push(20);
    cq.push(30);
    cq.push(40);
    cq.push(50);
    cq.print();

    cq.pop();
    cq.pop();
    cq.print();

    cq.push(60);
    cq.push(70);
    cq.print();

    return 0;
}
