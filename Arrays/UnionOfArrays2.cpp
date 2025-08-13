// Print Union when same values are there  in both the arrays :

#include<iostream>
#include <limits.h>
#include <vector>
using namespace std;


int main(){
  vector <int> arr{2,4,6,8,10};
  vector <int> brr{1,4,5,6};
  vector<int>output;

  
  for (int i=0; i<arr.size();i++){
        for (int j=0; j<brr.size(); j++){
            if (arr[i]==brr[j]){
                brr[j]=INT_MIN;
            }
        }
    }
   for(int j=0; j<brr.size(); j++){
       if (brr[j]!=INT_MIN){
           arr.push_back(brr[j]);
       }
   } 
//   Printing the result array : 
cout << "The Union of two arrays is displayed below : "<<endl;
  for (int i=0; i<arr.size(); i++){
      cout << arr[i] << " ";
  }
  cout << endl;
   return 0;
}   
