#include<iostream>
#include <limits.h>
#include <vector>
using namespace std;

// Traversing on a 2D array
int main(){
  int arr[3][3]={
      {1,2,4},
      {4,5,6},
      {7,4,9}
  };
  int target =0;
  int row =3;
  int col=3; 
  bool flag=0;
  for (int i=0; i<row; i++){
      for (int j=0; j<col; j++){
          if (arr[i][j]==target){
            cout << "Target is found in the index :"<<i<< ','<<j<< endl;
            flag=1;
          }
      }
  }
  if (flag==0){
          cout << "Target is not found!" << endl;
      }
    return 0;
}   
