#include <iostream>
using namespace std;

bool findTarget(int arr[], int size, int target){

    for (int i=0; i<size; i++){
        if (arr[i]==target){
            return true;
        }
        
    }
    return false;
}

int main(){
    int arr[]={10,12,14,15,16,20};
    int size =6;
    int target=30;

    bool flag=findTarget(arr,size,target);

    if (flag==true){
        cout << "Target is found "<<endl;
    }
    else{
        cout << "Target is not found "<< endl;
    }
}