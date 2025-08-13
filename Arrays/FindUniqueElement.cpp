#include<iostream>
#include <limits.h>
#include <vector>
using namespace std;

int findUniqueElement(vector <int> arr){
    int ans=0;
    for (int i=0; i<arr.size(); i++){
        ans=ans ^ arr[i];
    }
    return ans;
}
int main(){
  int size; 
  cout << "Enter the size of the vector : ";
  cin >> size;
  
  vector<int>arr(size);
  
  //Initialize the vector 
  cout << "Enter the values of the vector : "<< endl;
  for (int i=0; i<arr.size();i++){
      cin >> arr[i];
  }
  
  int uniqueElm=findUniqueElement(arr);
  cout << "The Unique element is the array is : "<< uniqueElm<<endl;
   return 0;
}   
