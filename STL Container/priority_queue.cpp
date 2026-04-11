#include <iostream>
#include <queue>
using namespace std;

int main() {

    // Creation of priority queue (Max Heap by default)
    priority_queue<int> pq;

    // Insertion
    pq.push(10);
    pq.push(25);
    pq.push(55);
    pq.push(11);

    // Max-heap → highest value has highest priority
    // Expected order: 55, 25, 11, 10

    // Top element
    cout << pq.top() << endl;

    // Remove top element
    pq.pop();
    cout << pq.top() << endl;

    cout << pq.size() << endl;

    // Another priority queue
    priority_queue<int> pq2;
    cout << pq2.empty() << endl;

    // Swap
    pq.swap(pq2);
    cout << pq2.empty() << " " << pq.empty() << endl;

    // Min-heap → smallest value has highest priority
    priority_queue<int, vector<int>, greater<int>> minPQ;

    // Example usage of min-heap
    minPQ.push(10);
    minPQ.push(25);
    minPQ.push(5);
    minPQ.push(15);

    cout << "Min-heap top: " << minPQ.top() << endl;

    return 0;
}