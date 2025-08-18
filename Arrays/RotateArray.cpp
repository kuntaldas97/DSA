#include <iostream>
#include <vector>

// Leet code : 189 https://leetcode.com/problems/rotate-array/
using namespace std; 
 void rotate(vector<int>& nums, int k) {
        vector <int> ans(nums.size());
        for (int i=0; i<nums.size(); i++){
            int j=(i+k)%nums.size();
                ans[j]=nums[i];
            }
            nums=ans;
        }
int main(){
    int size;
    cout<< "Enter the size of the vector : "; 
    cin >> size;
    int k;
    cout << endl<< "Enter the value of tgh rotation : ";
    cin >> k;
    vector <int> nums(size);
    cout <<endl <<"Enter the values of the vector : "<<endl;
    int num;
    for (int i=0; i<size; i++){
        cin >> nums[i];
    }
    cout << "Input Array : ";
    for (int i=0; i<size; i++){
        cout << nums[i]<< " ";
    }
    cout << endl;
    rotate(nums,k);

    cout << "Output Array : ";
    for (int i=0; i<size; i++){
        cout << nums[i]<< " ";
    }
    cout << endl;
    return 0;
}