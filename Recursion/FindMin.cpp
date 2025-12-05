#include <iostream>
#include <limits.h>

using namespace std; 
int findMin(int arr[], int size, int index, int min){
    if (index==size){
    return min;
    }
    if(arr[index]<min){
        min =arr[index];
    }
    
    return findMin(arr,size,index+1,min);;
}

int main(){
    int arr[]={81,20,5,48,95,2,123};
    int size=7;
    int index=0;
    int min=INT_MAX;

    int ans=findMin(arr, size, index, min);
    cout << "The min of the array is : "<<ans<< endl;
    return 0;
}