#include <iostream>
using namespace std;

// void Q(int z){
//     z+=z;

//     cout << z << " ";
// }
// void P(int *y){
//     int x=*y+2;
//     Q(x);
    
//     *y=x-1;

//     cout << x << " ";
// }
 int main(){

    // int a = 5 ;
    // int* p = &a;
    // cout <<p<<endl;
    // p=p+1;
    // cout<<p<<endl;

    // int arr[5]={1,2,3,4,5};

    // int* ptr=arr;
    // cout << ptr <<" "<< *ptr << endl;

    // int*ptr2 =&(arr[2]);
    // cout << ptr2<< " "<< *ptr2<<endl;

    // int (*ptr1)[5]=&arr;
    // cout << ptr1 <<" "<<ptr1[1]<<" "<< *ptr1<<" "<<*ptr1[1] <<endl;

    // char arr[20];
    // int i;

    // for(i=0;i<10;i++){
    //     *(arr+i)=65+i;
    // }
    //     *(arr+i)='\0';
    //     cout << arr<<endl;;

    // int x=5;
    // P(&x);
    // cout << x;

    // int arr[]={4,5,6,7};
    // int* p=(arr+1);

    // cout << *arr+9<< endl;

    float arr[5] = {12.5, 10.0, 13.5, 90.5, 0.5};
    float *ptr1 = &arr[0];
    float *ptr2 = ptr1+3; 

    cout << *ptr2<< " "<<ptr2-ptr1<<endl;

      return 0;

}
