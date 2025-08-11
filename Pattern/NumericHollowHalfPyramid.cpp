#include <iostream>

using namespace std;

int main(){
    // Printing numeric hollow half Pyramid

    int n;
    cout << "Enter the number of rows"<< endl;
    cin >> n;

    for (int i=1; i<=n; i++){
        for (int j=1; j<=i;j++){
            if (i==n || j==1||j==i){
                cout << j;
            }
            else{
                cout<<" ";
            }
        }
        cout<<"\n";
        
    }
}
