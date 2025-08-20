#include <iostream>
#include <vector>

// leet code - 268 https://leetcode.com/problems/missing-number/

using namespace std;
int missingNumber(vector<int>& nums) {
       int sum=0; 
       int ans=0;
       int size=nums.size(); 

       for (int i=0; i<size; i++){
        sum+=nums[i];
       }
       ans=(size*(size+1))/2 - sum;

       return ans;
    }

int main(){
    vector <int> nums {0,1,2,3,5,6,7,8};
    int ans=missingNumber(nums);
    cout << "The missing number from the array is :  "<<ans << endl; 
    return 0;
}