#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number of rows : ";
    cin >>n;
    
    for (int i=0;i<=n/2;i++){
            int ans;
            for (int j=0; j<2*i+1; j++){
            
                if (j<=(2*i+1)/2){
                    if (j==0){
                        if (i==0){
                            ans=j+1;
                    cout << '*'<<ans<<'*';
                        }
                        else{
                    ans=j+1;
                    cout << '*'<<ans;
                        }
                    }
                    else{
                       ans=j+1;
                    cout << ans; 
                    }
                }
                else if (j>(2*i+1)/2){
                    if (j==2*i){
                       ans=ans-1;
                     cout << ans<<"*"; 
                    }
                    else{
                    ans=ans-1;
                    cout << ans;
                    }
                }
            }
                     cout << endl;
    }
    for (int i=(n/2)+1; i<=n; i++){
        int ans;
           for (int j=0; j<2*(n-i)-1;j++){
               
                if (j<n-i){
                    if (j==0){
                        if(i==n-1){
                            ans=j+1;
                    cout << '*'<<ans<<'*';
                        }
                        else{
                    ans=j+1;
                    cout << '*'<<ans;
                        }
                    }
                    else{
                       ans=j+1;
                    cout << ans; 
                    }
                }
                else if (j>=n-i){
                    if (j==2*(n-i)-2){
                       ans=ans-1;
                     cout << ans<<"*"; 
                    }
                    else{
                    ans=ans-1;
                    cout << ans;
                    }
                }
             }
                      cout << endl;
    }
   
}   
