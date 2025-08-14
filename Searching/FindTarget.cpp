#include <iostream>
#include <vector>

// Leet Code 33 https://leetcode.com/problems/search-in-rotated-sorted-array/description/
using namespace std;
int findPivotIndex(vector <int> &arr){
    int start = 0;
    int end = arr.size()-1;
    int mid;
    int ans;
    while (start <= end){
         mid = start+(end-start)/2;

        if(start==end){
            ans=start;
            break;
        }
        else if (mid-1>=0 && arr[mid]<arr[mid-1]){  // mid-1>=0 very vital edge case
            ans=mid-1;
            break;
        }
        else if(mid+1 < arr.size() && arr[mid]>arr[mid+1]){ //mid+1 < arr.size() very vital edge case
            ans=mid;
            break;
        }
        else if (arr[start]>arr[mid]){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return ans;
}
int findTarget(vector<int>& arr, int target){
    int ans=findPivotIndex(arr);
    int start=0;
    int end=arr.size()-1;
    int targetIndex=-1;
    if (target>=arr[start]&&target<=arr[ans]){
        end=ans;
    }
    else{
        start=ans+1;
    }
    while(start<=end){
        int mid=start+(end-start)/2;
        if (arr[mid]==target){
            targetIndex=mid;
            break;
        }
        else if(target>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return targetIndex;
}
int main(){

    vector <int> arr;
    int n;

    cout << "Enter the size of the vector : ";
    cin >> n;
    cout << endl << "Enter the values of the vector : \n";
    int num;

    for (int i=0; i<n; i++){
        cin >>num;
        arr.push_back(num);
    }
    cout << "Input Array : ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    int target;
    cout<<endl<<"Enter the target : ";
    cin >> target;
    cout << endl <<endl;

    int ans=findTarget(arr, target);

    if (ans!=-1){
    cout <<"Target is found in the index : "<<ans << endl;
    }
    else {

        cout<<"Target is not found!"<<endl;
    }
    return 0;
}