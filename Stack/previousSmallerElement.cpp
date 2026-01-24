#include <iostream>
#include <vector>
#include<stack>

using namespace std;
vector<int> findPreviousSmallerElement(int *arr, int size, vector<int> &ans){
    stack<int>st;
    st.push(-1);

    for(int i=0; i<size; i++){
        int curr = arr[i];
        while(st.top()>=curr){
            st.pop();
        }
        ans[i]=st.top();

        st.push(curr);
    }
    
    return ans;
}
int main(){

    int arr[5]={8,4,6,2,3};
    int size = 5;
    vector<int>ans(size);

    ans=findPreviousSmallerElement(arr,size,ans);

    for(auto elm : ans){
        cout << elm << " ";
    }
    cout << endl;

    return 0;
}