#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
int solve(vector<int> &nums, int s, int e){
    if (s>e)
        return 0;

    int option1 = nums[s]+solve(nums, s+2, e);
    int option2 = 0+solve(nums,s+1, e);

    int ans=max(option1,option2);
    return ans;
}
int rob(vector<int> &nums){
int s=0;
int e=nums.size()-1;
if (nums.size()==1){
    return nums[s];
}
int option1 = solve(nums, s, e-1);
int option2 = solve(nums, s+1, e);

int ans=max(option1,option2);
    return ans;


}
int main(){

    vector<int> nums ={1,2,3,1};

    int ans=rob(nums);
    cout << ans << endl;
    return 0;
}