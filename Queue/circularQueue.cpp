#include <iostream>
using namespace std;

class CQueue{
    public:
    int* arr;
    int size;
    int front;
    int rear;

    CQueue(int size){
        arr = new int[size];
        for(int i=0, i<size; i++){
            arr[i]=0;
        }
        this->size=size;
        front=-1;
        rear=-1;
    }

    void push(int val){
        // Overflow case
        if(front==0 && rear==size-1){
            cout<<"Queue Overflow"<<endl;
        }
        // empty case
        else if(front==-1 && rear==-1){
            front++;
            rear++;
            arr[rear]=val;
        }
        // circular nature
        else if(rear==size-1 && front>0){
            rear=0;
            arr[rear]=val;
        }
        // Normal flow
        else{
            rear++;
            arr[rear]=val;
        }
    }
    void pop(){
        // Underflow
        if(rear==-1 && front==-1){
            cout << "Queue underflow"<<endl;
        }
        // single element
        else if (front==rear && front==0){
            arr[front]=-1;
            front--;
            rear--;            
        }
        // circular flow
        else if (front==size-1 && front!=0){
            
        } 
        else{
            arr[front]=-1;
            front++;
        }
    }
};

int main(){

    return 0;
}