#include <iostream>
#include <vector>

using namespace std;

int main(){
    int row; int column;
    cout <<"Enter the size of the row and column :"<<endl;
    cin >> row;
    cin >> column;

    vector<vector<int>>matrix(row, vector <int>(column));

    cout <<"Emter the values of the vector :"<<endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            cin >> matrix[i][j];
        }
    }
    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    
    return 0;
}