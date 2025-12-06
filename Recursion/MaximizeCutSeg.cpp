#include <iostream>
#include <limits.h>

using namespace std;
int maximizeCutSeg(int n, int x, int y, int z){

    if (n==0){
        return 0;
    }
    if (n<0){
        return INT_MIN;
    }

int option1 = 1+ maximizeCutSeg(n-x, x, y, z);
int option2 = 1+ maximizeCutSeg(n-y, x, y, z);
int optrion3= 1+ maximizeCutSeg(n-z, x, y, z);

int finalAns=max(option1,max(option2,optrion3));

return finalAns;
}
int main(){
    int n=4;
    int x=2;
    int y=1; 
    int z=1;

    int ans=maximizeCutSeg(n,x,y,z);

    cout << "Maximum possible segments : "<< ans<< endl;

    return 0;
}