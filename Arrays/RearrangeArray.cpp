#include <iostream>
#include <vector>

// leet code : 2149 https://leetcode.com/problems/rearrange-array-elements-by-sign/description/

using namespace std;
vector <int> rearrangeArray(vector <int> &arr, int size){
    int positiveIndex=0;
    int negativeIndex=1;

    vector <int> temp(size);

    for (int i=0; i<size; i++){
        if (arr[i]>0){
            temp[positiveIndex]=arr[i];
            positiveIndex+=2;
        }
        else{
            temp[negativeIndex]=arr[i];
            negativeIndex+=2;
        }
    }
    return temp;

}
int main(){
    int size;
    cout << "Enter the size of the vector : ";
    cin >> size; 
    
    vector <int> arr(size);
    cout << "Enter the values of the vector : "<<endl;
    for(int i=0; i<size; i++){
cin >> arr[i];
    }
    cout << endl;

    vector <int> ans = rearrangeArray(arr, size);

    for (int i=0; i<size; i++){
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}