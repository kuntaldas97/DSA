#include<iostream>
#include <limits.h>
#include <vector>
using namespace std;


int main(){
    vector <int> arr{0,1,0,0,1,1,0,1,1,0,1};
    int left=0;
    int right= arr.size()-1;
    
    while(left <=right ){
        if (arr[left]==1){
            arr[left]=arr[right];
            arr[right]=1;
            right--;
        }
        else if (arr[left]==0){
            left++;
        }
    }
    cout << "Below is the sorted array : "<< endl;
    for (int i=0; i<arr.size(); i++){
        cout << arr[i] << " ";
    }
    return 0;
}   
