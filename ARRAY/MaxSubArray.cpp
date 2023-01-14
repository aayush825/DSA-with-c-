//subarray - contiguos part of array
//kadanes algo is used to find the optimized soln
//we'll not carry the sum which is negative as we are trying to find the max subarray
//if sum goes less than 0 we'll make it equal to 0
#include<bits/stdc++.h>
using namespace std;

int maxSubarray(vector<int>& nums){
    int sum =0;
    int maxi = INT_MIN;

    //linearly iterating over nums vector
    for(auto it:nums){

        sum += it;//doing sum
        maxi = max(sum,maxi);
        if(sum < 0){
            sum =0;
        }
    }
    return maxi;
}

int main(){
    vector<int> nums{-2,-3,4,-1,-2,1,5,-3};

    int ans = maxSubarray(nums);
    cout<<ans;
}