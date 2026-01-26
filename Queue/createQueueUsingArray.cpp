#include <iostream>
using namespace std;

class Queue{
    public:
    int* arr;
    int size;
    int front;
    int rear;

    Queue(int size){
        arr = new int[size];
        this->size=size;
        for(int i = 0; i < size; i++){
        arr[i] = 0;
    }
        front=-1;
        rear=-1;
    }

    void push(int val){
        // for overflow condition 
        if(rear==size-1){
            cout << "Queue overflow"<< endl;
            return;
        }
        // empty case
        else if(front==-1 && rear==-1){
            front++;
            rear++;
            arr[rear]=val;
        }
        else{
            rear++;
            arr[rear]=val;
        }
    }
    void pop(){
        // empty case
        if(front==-1 && rear==-1){
            cout<<"Queue Underflow"<<endl;
            return;
        }
        else if(front==rear){
            arr[rear]=-1;
            front=-1;
            rear=-1;
        }
        else{
            arr[front]=-1;
            front++;
        }
    }
    bool isEmpty(){
        if(front==-1 && rear==-1){
            return true;
        }
    }
    int getSize(){
        if(front==-1 && rear==-1){
            return 0;
        }
        else{
        return rear-front+1;
        }
    }
    int getFront(){
        if(front==-1){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        else{
            return arr[front];
        }
    }
    int getBack(){
        if(rear==-1){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        else{
            return arr[rear];
        }
    }
    void print(){
        cout << "Printing Queue : "<<endl;
        for(int i=0; i<size; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }

};

int main(){

    Queue q(5);
    q.print();

    q.push(10);
    q.print();

    q.push(20);
    q.print();

    q.push(30);
    q.print();

    q.push(40);
    q.print();

    q.push(50);
    q.print();

    q.push(60);

    int size = q.getSize();
    cout <<"Current size of the queue is : "<< size <<endl;

    q.pop();
    q.print();
    size=q.getSize();
    cout <<"Current size of the queue is : "<< size <<endl;

    cout << "Front = "<<q.getFront()<<", Back = "<<q.getBack()<<endl;
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    size=q.getSize();
    cout <<"Current size of the queue is : "<< size <<endl;
    q.print();
    return 0;
}