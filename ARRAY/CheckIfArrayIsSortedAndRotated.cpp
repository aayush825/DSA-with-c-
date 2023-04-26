#include<bits/stdc++.h>

using namespace std;

bool check(vector<int> nums){
    int count=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i] > nums[(i+1)%nums.size()]){
            count++;
        }
        if(count>1){
            return false;
        }
    }
    return true;
}

int main(){
    vector<int> nums{3,4,5,1,2};
    //vector<int> nums{1,1,1};
    bool ans = check(nums);
    if(ans)
        cout<<"true";
    else 
        cout<<"false";    
}

