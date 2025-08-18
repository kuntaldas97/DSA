#include <iostream>
#include <vector>

using namespace std;

void printArrangedArray(vector<int> &arr){
    int left =0; 
    int right= arr.size()-1;
    while (left<=right){
        if (left==right){
            break;
        }
        if (arr[left]>=0 and arr[right]<0){
           swap(arr[left],arr[right]);
           left++;right--;
        }
        else if (arr[right]>=0){
            right--;
        }
        else if(arr[left]<=0){
            left++;
        }
    }
}
int main(){

    int size;
    cout << "Enter the size of the vector : ";
    cin >> size ;
    vector <int> arr ;
    int num; 
    cout << "enter the values of the vector : "<<endl;

    for(int i=0; i<size; i++){
        cin >> num;
        arr.push_back(num);
    }
    cout << "Input Array : "<< endl;
    for (int i=0; i<size; i++){
        cout << arr[i] << " ";  
    }
    cout << endl ;

    printArrangedArray(arr);
    cout << "Output Array : "<<endl;
     for (int i=0; i<size; i++){
        cout << arr[i] << " ";  
    }
    cout << endl ;

    return 0;
}