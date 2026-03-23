class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) 
    {
        vector<vector<int>> result;
        vector<int>ans;
        gen(nums, 0,ans, result);
        return result;
    }
void gen(vector<int>& nums, int start, vector<int>&current,vector<vector<int>>&result) {
        result.push_back(current); 
        for (int i = start; i < nums.size(); i++) {
            current.push_back(nums[i]); 
            gen(nums, i+1, current, result); 
            current.pop_back(); 
        }
    }
};