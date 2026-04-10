#include <iostream>
#include <queue>
using namespace std;

int main() {

    // Creation of the queue
    queue<int> q;

    // Check if empty
    cout << q.empty() << endl;

    // Insertion
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);   // Queue: 10, 20, 30, 40

    cout << q.empty() << endl;
    cout << q.size() << endl;

    // Access front and back
    cout << q.front() << endl;
    cout << q.back() << endl;

    // Remove front element
    q.pop();
    cout << q.front() << endl;

    // Another queue
    queue<int> p;
    cout << p.empty() << endl;

    // Swap queues
    q.swap(p);

    cout << q.empty() << " " << p.empty() << endl;

    return 0;
}