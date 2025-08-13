#include<iostream>
#include <limits.h>
#include <vector>
using namespace std;

// Find Min and Max in a 2D array
int main(){
  int arr[3][3]={
      {1,2,4},
      {4,5,6},
      {7,4,9}
  };
  int max =INT_MIN;
  int min = INT_MAX;
  int row =3;
  int col=3; 
  for (int i=0; i<row; i++){
      for (int j=0; j<col; j++){
          if (arr[i][j]>max){
            max=arr[i][j];
          }
          if(arr[i][j]<min){
             min= arr[i][j];
          }
      }
  }
  cout << "The max element in the array is : "<<max<<endl;
  cout << "The min element in the array is : "<<min<<endl;
    return 0;
}   
