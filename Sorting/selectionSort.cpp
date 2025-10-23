#include <iostream>
#include <vector>

using namespace std;
void print(vector <int> &v){
    for (int i=0; i<v.size(); i++){
        cout << v[i]<< " ";
    }
    cout << endl;
}
void selectionSort(vector <int> &v){
    for (int i=0; i<v.size()-1; i++){
        int minIndex=i;
        for (int j=i+1; j<v.size(); j++){
          if(v[j]<v[minIndex]){
            minIndex=j;
          }  
        }
        swap(v[i], v[minIndex]);
    }
}
int main(){
    vector <int> v;
    int n;
    cout << "Enter the size of the vector : ";
    cin >> n;
    cout << "Enter the elements of the vector :"<< endl;
    int elm;
    for (int i=0; i<n; i++){
        cin>>elm;
        v.push_back(elm);
    }
    selectionSort(v);
    print(v);

}