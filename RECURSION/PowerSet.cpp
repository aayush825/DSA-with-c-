class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
       int n = nums.size();
       int powSize = 1<<n;
        for(int counter = 0; counter < powSize; counter++){
            vector<int> v;
            for(int j =0; j < n;j++){
                if((counter & (1 << j)) != 0){
                       v.push_back(nums[j]); 
                }
            }   
            ans.push_back(v); 
        }
        return ans;
    }
};