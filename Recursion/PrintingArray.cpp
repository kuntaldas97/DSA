#include <iostream>

using namespace std;
void printArray(int arr[], int size){
    if (size==0){
        return;
    }
  cout << arr[0] << " ";
  printArray(arr+1, size-1);
}

int main(){

    int arr[]={2,4,6,8,10};
    int size=5;

    printArray(arr,size);
    cout <<endl;

    return 0;
}