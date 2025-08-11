#include <iostream>

using namespace std;

int main(){
    // printing full hollow pyramid
    int n; 
    cout << "Enter the Input : \n";
    cin>>n;

    for(int i=0; i<n; i++){
        for (int j=0; j<2*n; j++){
            if(i==0 || i==j || i==2*n-j-1)
            cout<<"*";
            else
            cout<<" ";
        }
        cout << endl;
    }

}