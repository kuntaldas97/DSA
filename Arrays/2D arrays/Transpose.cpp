#include <iostream>
#include <vector>

using namespace std;

void getTranspose(vector<vector<int>> &arr, int row, int column)
{

    cout << "Output Array : " << endl;
    for (int i = 0; i < column; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
}
int main()
{

    int row, column;
    cout << "Enter the row size of the vector : " << endl;
    cin >> row;
    cout << "Enter the column size of the vector : " << endl;
    cin >> column;
    cout << "The the values of the array : " << endl;
    vector<vector<int>> arr(row, vector<int>(column));

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "input array : " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl
         << endl;

    getTranspose(arr, row, column);
    return 0;
}