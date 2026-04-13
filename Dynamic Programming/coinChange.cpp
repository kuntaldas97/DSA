#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int solveUsingRec(vector<int>& coins, int amount) {
        if (amount == 0)
            return 0;

        int mini = INT_MAX;

        for (int i = 0; i < coins.size(); i++) {
            if (amount >= coins[i]){
                int recKaAns=solveUsingRec(coins, amount - coins[i]);
                if (recKaAns < INT_MAX) {
                int ans = 1 + recKaAns;
                mini = min(mini, ans);
                }
            }
        }
        return mini;
    }

    int solveUsingMem(vector<int>& coins, int amount, vector<int>& dp) {
        if (amount == 0)
            return 0;

        if (dp[amount] != -1)
            return dp[amount];

        int mini = INT_MAX;

        for (int i = 0; i < coins.size(); i++) {
            if (amount >= coins[i]) {
                int recKaAns = solveUsingMem(coins, amount - coins[i], dp);
                if (recKaAns < INT_MAX) {
                    int ans = 1 + recKaAns;
                    mini = min(mini, ans);
                }
            }
        }
        dp[amount] = mini;
        return dp[amount];
    }

    int solveUsingTabulation(vector<int>& coins, int amount) {
        vector<int> dp(amount + 1, INT_MAX);
        dp[0] = 0;

        for (int i = 1; i <= amount; i++) {
            for (int j = 0; j < coins.size(); j++) {
                if (i >= coins[j] && dp[i - coins[j]] < INT_MAX) {
                    dp[i] = min(dp[i], 1 + dp[i - coins[j]]);
                }
            }
        }
        return dp[amount];
    }

    int coinChange(vector<int>& coins, int amount) {
        int ans = solveUsingTabulation(coins, amount);

        if (ans == INT_MAX)
            return -1;

        return ans;
    }
};

int main() {
    Solution obj;

    vector<int> coins = {1, 2, 5};
    int amount = 11;

    int result = obj.coinChange(coins, amount);

    cout << "Minimum coins required: " << result << endl;

    return 0;
}