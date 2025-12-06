#include <iostream>
#include <limits.h>
using namespace std;

void findMax(int arr[], int size, int index, int &maxx){

    if (index==size){
        return;
    }
    maxx = max(arr[index],maxx);
    findMax(arr,size,index+1,maxx);
}

int main(){
    int arr[]={5,2,83,91,1,45};
    int size=6;
    int index=0;
    int maxx= INT_MIN;

    findMax(arr, size, index, maxx);
    cout<<"The max element in the array is : " << maxx << endl;
    return 0;
}