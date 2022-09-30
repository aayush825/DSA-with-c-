#include <iostream>
using namespace std;
int countDistinctWayToClimbStair(long long nStairs)
{
    //base case
    if(nStairs < 0)
        return 0;
    
    if(nStairs == 0)
        return 1;
    
    //R.C
    return countDistinctWayToClimbStair(nStairs-1) 
        + countDistinctWayToClimbStair(nStairs-2);
    
    
}
int main() {
    int ans;
    int nStairs =5;
    
    ans = countDistinctWayToClimbStair(nStairs);
    
    cout<<ans;
    
    return 0;
}
