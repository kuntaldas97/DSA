#include <iostream>

using namespace std;
bool isSorted(int arr[], int size, int index){
    bool ans;
    if (index>=size-1){
        return true;
    }
    if(arr[index]>arr[index+1]){
        return false;
    }
   
    return isSorted(arr, size, index+1);;
}
int main(){
int arr[]={10,20,-30,50,80};
int size=5;
int index=0;

bool ans = isSorted(arr, size, index);
if (ans==true){
    cout <<"The array is sorted!"<< endl; 
}else{
    cout<< "The array is not sorted!"<< endl;
}
    return 0;
}