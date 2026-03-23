class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) 
    {   
        vector<vector<int>>res;
        vector<int>temp;
        gen(res,temp,candidates,target,0,0);
        return res;

    }
    void gen(vector<vector<int>>&res, vector<int>&temp,vector<int>& candidates,int target,int index,int curr)
    {
        if (target == curr) {
            res.push_back(temp);
            return;
        }
        if (target < curr) return;
        for (int i = index; i < candidates.size(); i++) 
        {
            temp.push_back(candidates[i]);
            gen(res, temp, candidates, target, i, curr+ candidates[i]);
            temp.pop_back(); 
        }
    }
};