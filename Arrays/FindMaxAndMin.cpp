#include <iostream>
#include <limits.h>
using namespace std;
void findZeroOne(int arr[], int size){
    int min=INT_MAX;
    int max=INT_MIN;

    for(int i=0; i<size; i++){
        if (arr[i]<min){
            min=arr[i];
        }
        if (arr[i]>max){
            max=arr[i];
        }
    }

    cout <<"The min element is the array is : "<<min<<endl;
    cout<< "The max element is the array is : "<<max<<endl;
}
int main(){
    int arr[]={10,5,42,88,63,4,9,422};
    int size =8;

    findZeroOne(arr,size);
}