#include <iostream>
#include <vector>

using namespace std;
vector<int> findOccurance(int arr[], int size, int index, int target){
    vector<int> ans;
    vector<int> aageKaAns;
    if(index==size){
        return ans;
    }
    if (arr[index]==target){
        ans.push_back(index);
    }
    aageKaAns=findOccurance(arr, size, index+1, target);
    ans.insert(ans.end(), aageKaAns.begin(), aageKaAns.end());

    return ans;

}

int main(){
    int arr[]={10,20,10,10,30};
    int size = 5;
    int index=0;
    int target=10;
    vector <int> ans;
    ans=findOccurance(arr, size, index, target);

    for(auto elm : ans ){
        cout << elm << " ";
    }
    cout << endl;
    return 0;
}