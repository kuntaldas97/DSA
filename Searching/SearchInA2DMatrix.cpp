#include <iostream>
#include <vector>

using namespace std;
bool searchMatrix(vector<vector<int>> &arr, int row, int col, int target)
{
    int totalElem = row * col;

    int s = 0;
    int e = totalElem - 1;

    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        int rowIndex = mid / col;
        int colIndex = mid % col;
        int currNumber = arr[rowIndex][colIndex];
        
        if (currNumber == target)
        {
            return true;
        }
        else if(target > currNumber){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return false;
}
int main()
{
    int row, col, target;

    cout << "Enter the target : ";
    cin >> target;

    cout << "Enter the value of the row and column : " << endl;
    cin >> row;
    cin >> col;

    vector<vector<int>> arr(row, vector<int>(col));

    cout << "Enter the vales of the 2D array :" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "Input Array :" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    bool ans = searchMatrix(arr, row, col, target);

    if(ans==true){
        cout << "Target is found!"<<endl;
    }
    else{
        cout << "Target is not found!"<<endl;
    }
    return 0;
}