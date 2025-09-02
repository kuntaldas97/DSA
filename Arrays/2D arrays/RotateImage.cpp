#include <iostream>
#include <vector>

using namespace std;

void reverseVector(vector<int> &arr)
{
    int start = 0;
    int end = arr.size() - 1;

    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
void rotate(vector<vector<int>> &matrix)
{
    int n = matrix.size();

    // first Transpose
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < matrix[i].size(); j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    // reverse the 2D matrix

    for (int i = 0; i < n; i++)
    {
        reverseVector(matrix[i]);
    }
}
int main()
{
    int row;
    int column;
    cout << "Enter the size of the row and column :" << endl;
    cin >> row;
    cin >> column;

    vector<vector<int>> matrix(row, vector<int>(column));

    cout << "Emter the values of the vector :" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cin >> matrix[i][j];
        }
    }
    cout << "Input Vector : " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    rotate(matrix);
    cout << "After rotation of 90 degree : " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}