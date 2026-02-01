#include <iostream>
#include <stack>
#include <queue>

using namespace std;
void reverseKElements(queue<long long int> &q, int k){

    int restElm=q.size()-k;
    if(q.empty() || k>q.size() || k<0){
        cout << "Either the queue is empty or You have entered a wrong input!"<< endl;
        return;
    }
    stack<long long int> st;
    while (k>0){
        st.push(q.front());
        q.pop();
        k--;
    }
    while(!st.empty()){
        q.push(st.top());
        st.pop();
    }
    while(restElm>0){
        q.push(q.front());
        q.pop();
        restElm--;
    }
}
int main(){

    queue<long long int> q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);

    int k;
    cout << "Enter the value of k to be reversed : ";
    cin >> k;

    reverseKElements(q, k);

    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout << endl;
    

    return 0;
}