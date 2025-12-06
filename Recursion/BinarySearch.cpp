#include <iostream>

using namespace std;
int binarySearch(int arr[], int s, int e, int target){

    if(s>=e){
        return -1;
    }
    int mid = s+(e-s)/2;
    if(arr[mid]==target){
        return mid;
    }
    else if(arr[mid]>target){
        return binarySearch(arr, s, mid-1, target);
    }
    else if (arr[mid]<target){
        return binarySearch(arr, mid+1, e, target);
    }

    return mid;
}

int main(){

    int arr[]={10,20,50,70,80};
    int target=0;
    int s=0;
    int e=4;

    int ans=binarySearch(arr,s,e,target);

    if (ans==-1){
        cout << "Target is not found!"<< endl;
    }
    else{
        cout << "Target is found at index "<<ans<< endl;
    }

    return 0;
}