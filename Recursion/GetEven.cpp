#include <iostream>
#include <vector>

using namespace std;
vector<int> solve(int arr[], int size, int index, vector<int> &v)
{

    if (index == size)
    {
        return v;
    }
    if (arr[index] % 2 == 0)
    {
        v.push_back(arr[index]);
    }
    solve(arr, size, index + 1, v);

    return v;
}
int main()
{
    int arr[] = {10, 11, 12, 14, 15, 16, 17, 20};
    int size = 8;
    int index = 0;
    vector<int> v;
    solve(arr, size, index, v);
    cout << "Printing the Even Array : "<<endl;
    for (auto elm : v)
    {
        cout << elm << " ";
    }
    cout << endl;
    return 0;
}