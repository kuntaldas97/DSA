#include <iostream>

using namespace std;
void quickSort(int arr[], int start, int end){

    
    if (start>=end)
        return;

    int pivot=end;
    int j=start;
    int i=start-1;


    while(j<pivot){
        if(arr[j]<arr[pivot]){
            i++;
            swap(arr[i],arr[j]);
        }
        j++;
    }
    i++;
    swap(arr[i],arr[pivot]);
    quickSort(arr,start,i-1);
    quickSort(arr,i+1,pivot);
}

int main(){
    int arr[]={7,2,1,8,6,3,5,4};
    int size=8;
    int start=0;
    int end=size-1;


    quickSort(arr, start, end);
    
    cout << "After quick sort "<<endl;

    for(int elm : arr){
        cout << elm << " ";
    }
    cout << endl;

    return 0;
}