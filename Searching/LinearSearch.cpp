#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> arr{10,20,30,40,50,70,90};
    int target =70;
    bool flag=0;
    for (int i=0; i<arr.size(); i++){
        if (arr[i]==target){
            flag=1;
        }
    }
    if (flag ==1){
        cout << "Target is found!"<< endl;
    }
    else{
        cout << "Target is not found! "<< endl;
    }
}
