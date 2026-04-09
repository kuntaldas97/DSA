#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Normal recursion
    int solveUsingRec(vector<int>& nums, int index){
        if(index >= nums.size()){
            return 0;
        }

        int include = nums[index] + solveUsingRec(nums, index + 2);
        int exclude = solveUsingRec(nums, index + 1);

        return max(include, exclude);
    }

    // Memoization
    int solveUsingMem(vector<int>& nums, int index, vector<int>& dp){
        if(index >= nums.size()) return 0;

        if(dp[index] != -1) return dp[index];

        int include = nums[index] + solveUsingMem(nums, index + 2, dp);
        int exclude = solveUsingMem(nums, index + 1, dp);

        dp[index] = max(include, exclude);
        return dp[index];
    }

    // Tabulation
    int solveUsingTab(vector<int>& nums){
        int n = nums.size();
        if(n == 0) return 0;
        if(n == 1) return nums[0];

        vector<int> dp(n, -1);

        dp[n-1] = nums[n-1];

        for(int index = n-2; index >= 0; index--){
            int tempAns = 0;
            if(index + 2 < n){
                tempAns = dp[index + 2];
            }

            int include = nums[index] + tempAns;
            int exclude = dp[index + 1];

            dp[index] = max(include, exclude);
        }

        return dp[0];
    }

    int rob(vector<int>& nums) {
        return solveUsingTab(nums);
    }
};

int main() {
    Solution obj;

    // Example input
    vector<int> nums = {2, 7, 9, 3, 1};

    int result = obj.rob(nums);

    cout << "Maximum money that can be robbed: " << result << endl;

    return 0;
}