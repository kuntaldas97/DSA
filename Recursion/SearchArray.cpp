#include <iostream>

using namespace std;

bool searchArray(int arr[], int size, int target){
   
    if(size==0){
        return false;
    }
    if (arr[0]==target){
        return true ;
    }
    
    return searchArray(arr+1,size-1,target);
}

int main(){

    int arr[]={10,20,30,40,50,60};
    int size=6;
    int target=50;

    int ans=searchArray(arr,size,target);

    if (ans==true){
        cout<< "Target is found "<< endl;

    }else{
        cout<< "Target is not found "<< endl;
    }

    return 0;
}