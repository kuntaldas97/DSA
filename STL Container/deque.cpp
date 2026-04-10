#include <iostream>
#include <deque>
using namespace std;

int main() {

    // Creation of deque
    deque<int> q;

    // Check if empty
    cout << q.empty() << endl;

    // Insertion
    q.push_back(10);
    q.push_back(20);
    q.push_front(30);
    q.push_back(40);
    q.push_front(50);
    q.push_front(60);

    // ❌ Avoid printing iterators directly
    // cout << q.begin() << " " << q.end() << endl;

    // Traversal using iterator
    deque<int>::iterator it = q.begin();
    while (it != q.end()) {
        cout << *it << " ";
        it++;
    }
    cout << endl;

    // Basic operations
    cout << q.empty() << endl;
    cout << q.size() << endl;
    cout << q.front() << endl;
    cout << q.back() << endl;

    // Access elements
    cout << q[0] << " " << q.at(1) << endl;

    // Pop operations
    q.pop_back();
    q.pop_front();

    cout << q.size() << endl;

    // Print and empty deque
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop_front();
    }
    cout << endl;

    // Insert (only valid when deque is not empty OR position is valid)
    q.insert(q.begin(), 100);

    // Another deque
    deque<int> p;
    cout << p.empty() << endl;

    // Swap
    q.swap(p);
    cout << q.empty() << " " << p.empty() << endl;

    // More operations
    p.push_back(200);
    p.push_front(300);
    p.push_back(400);

    cout << p.size() << endl;

    // Erase elements (check size before using end()-2)
    if (p.size() >= 2) {
        p.erase(p.begin(), p.end() - 2);
    }

    cout << p.size() << endl;

    // Clear
    p.clear();
    cout << p.size() << endl;

    return 0;
}