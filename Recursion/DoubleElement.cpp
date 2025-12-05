#include <iostream>
using namespace std;

// using a different approach using pointer.
void doubleElm(int* arr, int size){

    if (size==0){
        return;
    }
    *arr=*arr*2;
    cout << *arr<<" ";
    doubleElm(arr+1,size-1);

}

int main(){
    int arr[]={2,4,6,8,10};
    int size=5;
    doubleElm(arr,size);
    cout << endl;
    return 0;
}