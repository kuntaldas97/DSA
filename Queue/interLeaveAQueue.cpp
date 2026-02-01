#include <iostream>
#include <vector>
#include <queue>

using namespace std;
// Interleave first half of a queue
void interLeaveQueue(queue<long long int> &q){

    int size=q.size();
    vector<long long int> arr(size);

    int i=0;
    while(i<size){
        arr[i]=q.front();
        q.pop();
        i+=2;
    }
    i=1;
    while(i<size){
       arr[i]=q.front();
       q.pop();
       i+=2; 
    }
    for(int i=0; i<size; i++){
        q.push(arr[i]);
    }
}

int main(){

    queue<long long int>q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    // q.push(70);

    interLeaveQueue(q);

    while(!q.empty()){
        cout << q.front()<<" ";
        q.pop();
    }
    cout << endl;

    return 0;
}