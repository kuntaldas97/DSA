#include <iostream>
#include <vector>

using namespace std;

int findLastOccurance(vector<int>arr, int target){
    int start=0;
    int end=arr.size()-1;
    int mid=start+(end-start)/2;
    while (start<=end){
        if (arr[mid]==target && (mid==0 || arr[mid+1]!=target)){
            return mid;
        }
        else if (arr[mid]==target && arr[mid+1]==target){
            start=mid+1;
        }
        else if (target<arr[mid]){
            end=mid-1;
           
        }
        else if(target > arr[mid]){
            start=mid+1;
        }
         mid=(start+end)/2;
    }
    return -1;
}
int main(){
   vector<int>arr{10,20,30,30,30,30,40,50,60,70};
   int target =30;

   int targetFound=findLastOccurance(arr,target);

   if (targetFound!=-1){
    cout << "Target found at index : "<<targetFound<<endl;
   }
   else{
    cout << "Target is not found!"<< endl;
   }
   return 0;
}
