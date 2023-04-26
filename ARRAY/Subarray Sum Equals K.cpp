#include<bits/stdc++.h>
using namespace std;

int subArray(vector<int>& nums, int k){

    map<int,int> mpp;

    mpp[0] = 1;
    int presum = 0 ,cnt = 0;
    for(int i=0;i<nums.size();i++){
        presum += nums[i];
        int remove = presum - k;
        cnt += mpp[remove];
        mpp[presum] += 1;

    }
    return cnt;

}