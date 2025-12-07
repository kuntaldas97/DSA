#include <iostream>
#include <vector>
#include <limits.h>
// https://leetcode.com/problems/coin-change/
using namespace std;
int solve(vector<int> &coins, int amount){
    if (amount == 0){
        return 0;
    }
    int mini = INT_MAX;
    int ans = INT_MAX;
    for (int i = 0; i < coins.size(); i++)
    {
        int coin = coins[i];
        if (coin <= amount)
        {
            int aageKaAns = solve(coins, amount - coin);
            if (aageKaAns != INT_MAX)
            {
             ans = 1 + aageKaAns;
            }
        }
        mini =min(mini, ans);      
    }
    return mini;
}
   int coinChange(vector<int> &coins, int amount)
{
    int ans=solve(coins,amount);
    if(ans==INT_MAX)
        return -1;
    else
    return ans;

}
int main()
{

    vector<int> coins = {2};
    int amount = 3;

    int ans = coinChange(coins, amount);

    cout << "The ans is  : "<< ans << endl;

    return 0;
}