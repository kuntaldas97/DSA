#include <iostream>
using namespace std;

void extremePrintInAnArray(int arr[], int size){
int left=0;
int right=size-1;
int count=1; 
while(left<=right && count <= size){
    cout << arr[left] << " " << count;
    left++;
    count++;
    cout << arr[right] << " " << count;
    right--;
    count++;
  }
}

int main(){
    int arr[]={2,4,5,8,9,7,32};
    int size =7;

    extremePrintInAnArray(arr, size);

    return 0;
} 