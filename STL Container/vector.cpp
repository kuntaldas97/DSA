#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> v(5, 10);

    // Correct way to print begin and end values
    cout << *v.begin() << endl;        // first element
    cout << *(v.end() - 1) << endl;   // last element

    // Basic properties
    cout << v.size() << endl;
    cout << v.empty() << endl;
    cout << v.capacity() << endl;

    v.reserve(10);
    cout << v.capacity() << endl;

    cout << v.max_size() << endl;

    // Front & Back
    cout << v.front() << endl;
    cout << v.back() << endl;

    // Access elements
    cout << v[0] << " " << v.at(0) << endl;

    // push_back
    v.push_back(20);
    cout << v.back() << endl;
    cout << v.size() << endl;

    // pop_back
    v.pop_back();
    cout << v.back() << endl;
    cout << v.size() << endl;

    // insert
    v.insert(v.begin() + 2, 7);

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    cout << v.size() << endl;
    cout << v.back() << endl;

    // swap
    vector<int> num;
    v.swap(num);

    cout << v.size() << endl;
    cout << num.size() << endl;

    // Iterator traversal
    vector<int> first = {10, 11, 12, 13};

    vector<int>::iterator it = first.begin();
    while (it != first.end()) {
        cout << *it << " ";
        it++;
    }
    cout << endl;

    // 2D vector
    vector<vector<int>> arr(5, vector<int>(4, 0));
    cout << "Rows: " << arr.size()
         << ", Columns: " << arr[0].size() << endl;

    // Jagged array
    vector<vector<int>> brr(4);
    brr[0] = vector<int>(4);
    brr[1] = vector<int>(2);
    brr[2] = vector<int>(5);
    brr[3] = vector<int>(3);

    for (int i = 0; i < brr.size(); i++) {
        cout << i << "th row column count = "
             << brr[i].size() << endl;
    }

    return 0;
}