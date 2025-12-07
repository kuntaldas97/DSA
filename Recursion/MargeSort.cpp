#include <iostream>

using namespace std;

void marge(int arr[], int s, int e){

    int mid = s+(e-s)/2;

    int leftLen = mid-s+1;
    int rightLen = e-mid;

    // create left and right array 
    int *leftArr = new int[leftLen];
    int *rightArr = new int[rightLen];

    // copy values from original array to left array
    int k=s;
    for(int i=0; i<leftLen; i++){
        leftArr[i]=arr[k];
        k++;
    }
    // copy values from original array to right array
    k=mid+1;
    for(int i=0; i<rightLen; i++){
        rightArr[i]=arr[k];
        k++;
    }

    // sort karke marge krdo

    int leftIndex=0;
    int rightIndex=0;

    int mainArrayIndex=s;

    while(leftIndex < leftLen && rightIndex < rightLen){
        
        if(leftArr[leftIndex]<rightArr[rightIndex]){
            arr[mainArrayIndex]=leftArr[leftIndex];
            mainArrayIndex++;
            leftIndex++;
        }else{
            arr[mainArrayIndex]=rightArr[rightIndex];
            mainArrayIndex++;
            rightIndex++;
        }
    }

    //case 1 : right array exhausted 
    while(leftIndex<leftLen){
        arr[mainArrayIndex]=leftArr[leftIndex];
            mainArrayIndex++;
            leftIndex++;
    }
    // case 2 : left array exhausted
    while (rightIndex<rightLen){
        arr[mainArrayIndex]=rightArr[rightIndex];
            mainArrayIndex++;
            rightIndex++;
    }

    // last case
    delete[] leftArr;
    delete[] rightArr;
    
}

void margeSort(int arr[], int s, int e){

    // base case
    if(s>=e){
        return;
    }
    // break
    int mid=s+(e-s)/2;

    // for sorting left side
    margeSort(arr, s, mid);

    // for sorting right side
    margeSort(arr, mid+1, e);

    // marge both the arrays
    marge(arr, s, e);

}

int main(){

    int arr[]={2,1,4,9,6,3};
    int size=6;
    int s=0;
    int e=size-1;

    cout << "before marge sort"<<endl;
    for(int elm : arr){
        cout << elm << " ";
    }
    margeSort(arr,s,e);

    cout << "After marge sort"<<endl;
    for(int elm : arr){
        cout << elm << " ";
    }

    return 0;
}