#include <iostream>
using namespace std;
int reverseCount(int num){
    if(num == 0 ){
        return 0; 
    }else{
    cout << num <<" ";
    return reverseCount(num-1);
    }

}
int main(){
    int num;
    cout << "Enter the range : ";
    cin >> num;

    reverseCount(num);
    cout << endl;


    return 0;
}
