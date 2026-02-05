#include <iostream>
#include<vector>

// https://leetcode.com/problems/gas-station/description/

using namespace std;
int canCompleteCircuit(vector<int> &gas, vector<int> & cost){
    int balance=0;
    int deficit=0;

    int start=0;

    for(int i=0; i<gas.size();i++){
        balance= balance+gas[i]-cost[i];
        
        if(balance<0){
            deficit=abs(balance);
            start=i+1;
            balance=0;
        }
    }
    if(balance-deficit>=0){
        return start;
    }
    else{
        return -1;
    }
}

int main(){

    vector<int> gas = {1,2,3,4,5};
    vector<int> cost = {3,4,5,1,2};

    int ans=canCompleteCircuit(gas,cost);

    if(ans==-1){
        cout<< "can't complete the circle"<<endl;
    }
    else{
        cout<<"can comeplete the circle, start = end = "<<ans<<endl;
    }

    return 0;
}