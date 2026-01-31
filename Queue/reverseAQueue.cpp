#include <iostream>
#include <queue>
#include <stack>

using namespace std;
void reverseQueue(queue<long long int>&q){
    //   stack<int> st;

    // cout << "Before reverse : "<<endl;
    // while(!q.empty()){
    //     cout<<q.front()<<" ";
    //     st.push(q.front());
    //     q.pop();
    // }

    // cout << "\nAfter reverse : "<<endl;
    // while(!st.empty()){
    //     cout << st.top()<<" ";
    //     q.push(st.top());
    //     st.pop();
    // }

    // reverse the queue using recursion

    // base case
    if(q.empty()){
        return;
    }
    // dequeue current item from front
    long long int data = q.front();
    q.pop();

    // reverse the existing queue
    reverseQueue(q);

    // push the data to the queue
    cout << data << " ";
    q.push(data);
}
int main(){
    queue<long long int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    reverseQueue(q);
    return 0;
}