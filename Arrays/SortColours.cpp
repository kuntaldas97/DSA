#include <iostream>
#include <vector>

// leet code : 75 https://leetcode.com/problems/sort-colors/
using namespace std;
void sortColour(vector <int> &arr){
    int left=0; 
    int right=arr.size()-1;
    int index=0;
    while (index<=right){
        if (arr[index]==0){
            swap(arr[index],arr[left]);
                left++; index++;
        }
        else if(arr[index]==2){
            swap(arr[index], arr[right]);
            right--; 
            // don't do index++ here, this is the edge case.
         }
         else if (arr[index]==1){
            index++;
         }
        }
    }

int main(){

    vector <int> arr {1,1,0,2,0,2,1,0,2,2,0,1,0,1};

    sortColour(arr);
    for (int i=0; i<arr.size();i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}