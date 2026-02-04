#include <iostream>
#include <vector>
#include <deque>
#include <climits>

using namespace std;

vector<int> FirstMax(vector<int>& arr, int k) {
    vector<int> result;
    deque<int> dq;   // stores indices

    for (int i = 0; i < arr.size(); i++) {

        // Remove indices that are out of the current window
        if (!dq.empty() && dq.front() == i - k) {
            dq.pop_front();
        }

        // Remove elements smaller than current element
        while (!dq.empty() && arr[dq.back()] < arr[i]) {
            dq.pop_back();
        }

        // Add current index
        dq.push_back(i);

        // Window is valid
        if (i >= k - 1) {
            result.push_back(arr[dq.front()]);
        }
    }

    return result;
}

int main() {
    vector<int> arr = {2, 1, 5, 7, 4};
    int k;

    cout << "Enter the window size : ";
    cin >> k;

    vector<int> ans = FirstMax(arr, k);

    for (int elm : ans) {
        cout << elm << " ";
    }
    cout << endl;

    return 0;
}
