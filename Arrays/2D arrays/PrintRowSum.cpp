#include<iostream>
#include <limits.h>
#include <vector>
using namespace std;

// Print row sum
int main(){
  int arr[3][3]={
      {1,2,3},
      {4,5,6},
      {7,8,9}
  };
  int row =3;
  int col=3; 
  for (int i=0; i<row; i++){
      int sum=0;
      for (int j=0; j<col; j++){
          sum+=arr[i][j];
      }
      cout << "The sum of the row "<<i<< " is : "<< sum<< endl;
  }
    return 0;
}   
