#include <iostream>
#include <vector>
#include <limits.h>

using namespace std;

int findRow(vector<vector<int>> &arr, int row, int column){
    int previousOneCount=0;
    int currentOneCount=0;
    int ans;

    for (int i=0; i<row; i++){
        previousOneCount=currentOneCount;
        currentOneCount=0;
        for(int j=0; j<column; j++){
            if(arr[i][j]==1){
                currentOneCount+=1;
            }
            if (currentOneCount>=previousOneCount){
                ans=i;
            }
            else{
                ans=i-1;
            }
        }
    }
    return ans+1;
}

int main(){

    int row; 
    int column;

    cout << "Enter the number of rows and columns : "<< endl;
    cin >> row;
    cin >> column;

    vector<vector<int>> arr(row, vector<int>(column));

    cout << "Enter the values of the vector : "<<endl;
    for (int i=0; i<row; i++){
        for (int j=0; j<column; j++){
            cin >> arr[i][j];
        }
    }
    for (int i=0; i<row; i++){
        for (int j=0; j<column; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl; 
    }

    int ans = findRow(arr, row, column);

    cout << endl <<"The row with the highest count of 1 is : " <<  ans << endl;

    return 0;
}