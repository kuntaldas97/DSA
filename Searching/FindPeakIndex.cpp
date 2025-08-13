#include <iostream>
#include <vector>

using namespace std;
int findPeakIndex(vector <int> &arr){
   int start=0;
    int end= arr.size()-1;
    int mid;
    while(start<end){
       mid=start+(end-start)/2;

      if (arr[mid]<arr[mid+1]){
        start=mid+1;
      }
      else{
        end=mid;
      }
    } 
    return start;  
}
int main()
{
    vector<int> arr;
    int n;
    cout << "Enter the size of the vector : " << endl;
    cin >> n;
    int i = 0;
    int num;
    cout << "The the values of the array : " << endl;
    while (i < n)
    {
        cin >> num;
        arr.push_back(num);
        i++;
    }
    cout << "Input Array : ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl <<endl;

    int ans=findPeakIndex(arr);
    cout <<"The peak index of the array is : "<<ans<< endl;
    return 0;
}