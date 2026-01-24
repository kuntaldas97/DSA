
        st.push(curr);
    }
    return ans;
}

int main(){

    int arr[5]={8,4,6,2,3};
    int size = 5;
    vector<int>ans(size);

    ans= findNextSmallerElement(arr,size,ans);

    for(auto elm : ans){
        cout << elm << " ";
    }
    cout << endl;

    return 0;