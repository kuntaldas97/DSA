#include<iostream>
#include <limits.h>
#include <vector>
using namespace std;


int main(){
    vector <int> arr{10,20,40,50,60,70};
    int sum=80;
    cout << "The pair matching with the sum is :"<< endl;
    for (int i=0; i<arr.size()-1;i++){
        for (int j=i+1; j<arr.size(); j++){
            if(arr[i]+arr[j]==sum){
                cout << arr[i]<<","<< arr[j]<<endl;
            }
        }
    }
    return 0;
}   
