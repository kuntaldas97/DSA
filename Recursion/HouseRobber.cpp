#include <iostream>
#include <vector>
#include <limits.h>
// https://leetcode.com/problems/house-robber/description/

using namespace std;
int solve(vector<int> &nums, int size, int index){

    if (index>=size){
        return 0 ;
    }
    // chori kiya hai
    int option1= nums[index] + solve(nums,size, index+2);

    // chori nahi kiya
    int option2 = 0 + solve(nums, size, index+1);

    int finalAns=max(option1, option2);

    return finalAns;

}
int rob(vector<int> &nums){
    int size=nums.size();
    int index=0;

    int ans= solve(nums, size, index);

    return ans;
}
int main(){
    vector<int> nums = {1,2,3,1};

    int ans = rob(nums);

    cout << "The maximum amount getting robbed is : "<< ans<< endl;
    return 0;
}
