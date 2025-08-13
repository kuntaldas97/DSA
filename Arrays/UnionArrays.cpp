#include<iostream>
#include <limits.h>
#include <vector>
using namespace std;


int main(){
  int arr[]={2,4,6,8,10};
  int brr[]={1,3,5,7};
  int sizea=5, sizeb=4;
  
  vector<int>output;
  
  for (int i=0; i<sizea;i++){
      output.push_back(arr[i]);
  }
  for (int i=0; i<sizeb;i++){
      output.push_back(brr[i]);
  }
//   Printing the result array : 
  for (int i=0; i<output.size(); i++){
      cout << output[i] << " ";
  }
  cout << endl;
   return 0;
}   
