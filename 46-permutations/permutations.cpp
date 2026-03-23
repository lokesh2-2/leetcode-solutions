class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) 
    {
        vector<vector<int>>result;
       
        vector<int>temp;
        gen(result,temp,nums);
        return result;
    }
    void gen(vector<vector<int>>&result, vector<int>&temp,vector<int>& nums)
    {
        if(temp.size()==nums.size())
        {
            result.push_back(temp);
            return;
        }
        for(int idx=0;idx<nums.size();idx++)
        {
            if(find(temp.begin(), temp.end(), nums[idx]) != temp.end())
                continue;
            temp.push_back(nums[idx]);
            gen(result,temp,nums);
            temp.pop_back();
        }
    }
};