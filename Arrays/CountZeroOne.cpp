#include <iostream>
using namespace std;

void CountZeroOne(int arr[], int size){
    int zeroCount=0;
    int oneCount=0;

    for (int i=0; i<size; i++){
        if (arr[i]==0){
            zeroCount++;
        }
        else{
            oneCount++;
        }
    }
    cout << "the count of zero is : " << zeroCount<< endl;
    cout << "The count of one is : " << oneCount<< endl;
}

int main(){
    int arr[]={1,0,0,1,0,1,1,0,0,1};
    int size=10;

    CountZeroOne(arr,size);

    return 0;
}