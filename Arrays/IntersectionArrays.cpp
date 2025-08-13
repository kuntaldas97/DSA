#include<iostream>
#include <limits.h>
#include <vector>
using namespace std;


int main(){
  int arr[]={2,4,3,8,5,3};
  int brr[]={1,3,5,3,7};
  int sizea=6, sizeb=5;
  
  vector<int>output;
  
  for (int i=0; i<sizea;i++){
        for (int j=0; j<sizeb; j++){
            if (arr[i]==brr[j]){
                // Which one is already checked, I'm just mark it down.
                brr[j]=INT_MIN;
                output.push_back(arr[i]);
            }
        }
    }
//   Printing the result array : 
cout << "The intersection of two arrays is displayed below : "<<endl;
  for (int i=0; i<output.size(); i++){
      cout << output[i] << " ";
  }
  cout << endl;
  
   return 0;
}   
