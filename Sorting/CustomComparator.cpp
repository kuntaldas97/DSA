#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
void print(vector<vector<int>> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        vector<int> &temp = v[i];
        cout << temp[0] << "," << temp[1] << endl;
    }
}
bool customComp(vector<int> &a, vector<int> &b)
{
    return a[1] < b[1];
}
int main()
{
    vector<vector<int>> v;
    cout << "Enter the size of the vector : ";
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cout << "Enter the value of a, b" << endl;
        cin >> a >> b;
        vector<int> temp;
        temp.push_back(a);
        temp.push_back(b);
        v.push_back(temp);
    }
    cout << "Here are the values : " << endl;
    print(v);
    cout << "After sorting in increasing order on 1st index :" << endl;
    sort(v.begin(), v.end(), customComp);
    print(v);

    return 0;
}