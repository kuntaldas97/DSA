#include <iostream>
#include <queue>
#include <vector>

using namespace std;
vector<int> firstNegInt(vector<int> arr, int k){
    vector<int> result;
    deque<int> deq;
    int i=0, j=0;

    while(j<arr.size()){
        if(arr[j]<0){
            deq.push_back(arr[j]);
        }
        if(j-i+1==k){
            // insert elemnt for the window
            if(!deq.empty()){
                result.push_back(deq.front());
            }
            else{
                result.push_back(0);
            }
            // shifting the window
            if(arr[i]<0 && !deq.empty()){
                deq.pop_front();
            }
            i++;
        }
        j++;
    }

    return result;
}

int main(){

    vector<int> arr = {-1,-1,2};
    vector<int>ans;
    int k;
    cout<<"Enter the size of the window : ";
    cin>>k;

    ans=firstNegInt(arr,k);

    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }
    cout << endl;

    
    return 0;
}