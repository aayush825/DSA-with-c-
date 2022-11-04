class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans(2);
        
        unordered_map<int, int> complement;
        
        for(int i = 0; i < nums.size(); i++){
            int comp = target - nums[i];
            
            if(complement.find(comp) != complement.end()){
                ans[0] = complement[comp];
                ans[1] = i;
                return ans;
            }
            
            complement[nums[i]] = i;
        }
        
        return ans;
    }
};