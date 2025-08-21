#include <iostream>
#include <vector>

using namespace std;

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



    return 0;
}