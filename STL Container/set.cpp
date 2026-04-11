// STL Containers: Vector, list, queue, stack, map, set etc.

// Set:
// Sorted collection of unique elements.
// Elements are stored in sorted order, and duplicates are automatically removed.
// Provides efficient insertion, deletion, and search operations.

#include <iostream>
#include <set>
#include <unordered_set>
using namespace std;

int main() {

    // creation of ordered set
    set<int> st1;

    st1.insert(10);
    st1.insert(15);
    st1.insert(8);
    st1.insert(4);

    cout << "Size: " << st1.size() << endl;

    // traverse (ordered)
    cout << "Ordered set elements: ";
    for (auto val : st1) {
        cout << val << " ";
    }
    cout << endl;

    // ---------------- ERASE EXAMPLE ----------------
    cout << "\nErase elements using range:" << endl;
    st1.erase(st1.begin(), st1.end());   // erase all elements

    cout << "After erase -> Is empty: " << st1.empty() << endl;

    // insert again to show clear()
    st1.insert(1);
    st1.insert(2);

    // ---------------- CLEAR EXAMPLE ----------------
    cout << "\nClear() example:" << endl;
    st1.clear();

    cout << "After clear -> Is empty: " << st1.empty() << endl;

    // ------------------------------------------------

    // creation of unordered set
    unordered_set<int> st2;

    st2.insert(10);
    st2.insert(15);
    st2.insert(8);
    st2.insert(4);

    // find()
    if (st2.find(155) != st2.end()) {
        cout << "155 Found" << endl;
    } else {
        cout << "155 Not found" << endl;
    }

    // count()
    if (st2.count(15)) {
        cout << "15 Found" << endl;
    } else {
        cout << "15 Not found" << endl;
    }

    // traverse (unordered)
    cout << "Unordered set elements: ";
    for (auto val : st2) {
        cout << val << " ";
    }
    cout << endl;

    // erase using range (again for unordered_set)
    cout << "\nErase unordered_set using range:" << endl;
    st2.erase(st2.begin(), st2.end());

    cout << "After erase -> Is empty: " << st2.empty() << endl;

    return 0;
}