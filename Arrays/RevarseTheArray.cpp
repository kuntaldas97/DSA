#include <iostream>
using namespace std;

// using brueteforce approach 

void reverseTheArray(int arr[], int size){
     int temp;

    // Using while loop
    // int left=0;
    // int right=size-1;
    // while(left<=right){
    //     temp=arr[left];
    //     arr[left]=arr[right];
    //     arr[right]=temp;
    //     left++;
    //     right--;
    // }

    // Using for loop
    for(int left=0, right=size-1; left<=right; left++, right--){
        temp=arr[left];
        arr[left]=arr[right];
        arr[right]=temp;
    }

    for (int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int arr[]={2,4,6,8,10,14,7,85};
    int size=8;

    reverseTheArray(arr,size);

    return 0;
}