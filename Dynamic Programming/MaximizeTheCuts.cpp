#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution {
public:

    int solveUsingDP(int n, int x, int y, int z, vector<int> &dp) {

        if (n == 0) return 0;
        if (n < 0) return INT_MIN;

        if (dp[n] != INT_MIN) return dp[n];

        int a = solveUsingDP(n-x, x, y, z, dp);
        int ans1 = (a == INT_MIN) ? INT_MIN : 1 + a;

        int b = solveUsingDP(n-y, x, y, z, dp);
        int ans2 = (b == INT_MIN) ? INT_MIN : 1 + b;

        int c = solveUsingDP(n-z, x, y, z, dp);
        int ans3 = (c == INT_MIN) ? INT_MIN : 1 + c;

        dp[n] = max(ans1, max(ans2, ans3));
        return dp[n];
    }

    int maximizeTheCuts(int n, int x, int y, int z) {

        vector<int> dp(n+1, INT_MIN);

        int ans = solveUsingDP(n, x, y, z, dp);

        return (ans < 0) ? 0 : ans;
    }
};

int main() {

    int n, x, y, z;

    cout << "Enter n (length of rod): ";
    cin >> n;

    cout << "Enter x, y, z (cut lengths): ";
    cin >> x >> y >> z;

    Solution obj;
    int result = obj.maximizeTheCuts(n, x, y, z);

    cout << "Maximum number of cuts: " << result << endl;

    return 0;
}