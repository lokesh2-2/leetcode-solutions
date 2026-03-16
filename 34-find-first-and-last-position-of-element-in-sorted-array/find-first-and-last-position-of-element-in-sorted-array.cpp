class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target)
    {   vector<int>index(2,-1);
        
        int low=0,high=nums.size()-1,mid;
        while(low<=high)
        {
            mid=(low+high)/2;
            if(nums[mid]==target)
            {
                index[0]=mid;
                high=mid-1;
            }
            else if(nums[mid]>target)
            {
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        low=0,high=nums.size()-1;
        while(low<=high)
        {
            mid=(low+high)/2;
            if(nums[mid]==target)
            {
                index[1]=mid;
                low=mid+1;
            }
            else if(nums[mid]<target)
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
        return index;

    }
};