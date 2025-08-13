#include<iostream>
using namespace std;
int main(){
    int n;
    int col;
    int lastColCount;
    int temp2;
    cout << "Enter the number of rows : ";
    cin >>n;
    int temp=1; 
    for (int i=1; i<=n; i++){
        col=0;
        for (int j=1; j<=n/2; j++){
            if (j==1 && i==(n/2)+1){
                temp=temp-lastColCount;
            }
            else if (j==1 && i>(n/2)+1){
              temp=temp2;
              temp=temp+lastColCount+1;
            }
            if(i>=j && i<=n/2){
                cout <<temp++<<"*";
                col++;
                lastColCount=col;
            }
            else if(i>n/2 and i+j<=n+1){
                if (j==1){
                    temp2=temp;
                }
                cout <<temp++<<"*";
                col--;
                lastColCount=col;
            }
        }
        cout <<endl;
        
    }
    
}   
