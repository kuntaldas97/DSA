#include <iostream>
#include <vector>
using namespace std;

int findMissingElm(vector<int>arr){
    int start=0;
    int end=arr.size()-1;

    while(start<=end){
        int mid=start+ (end-start)/2;
        
        if(start==end && arr[mid]==mid+2){
            return arr[mid]-1;
        }
        else if(arr[mid]==mid+1){
            start=mid+1;
        }
        else if (arr[mid]==mid+2){
            end=mid;
        }
        else{
            return -2;
        }
    }
    return -1;
}

int main(){
    vector<int>arr{3};

    int ans=findMissingElm(arr);

   
    if (ans==-1){
        cout << "There is no missing element in the array!"<< endl;
    }
    else if (ans==-2){
        cout << "The Array itself is wrong!"<<endl;
    }
     else {
        cout << "Missing element is : "<<ans << endl;
    }
    return 0;
}