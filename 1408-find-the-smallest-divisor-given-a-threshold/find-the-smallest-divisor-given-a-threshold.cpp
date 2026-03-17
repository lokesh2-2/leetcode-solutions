class Solution {
public:
    int valid(vector<int>& nums, int k,int threshold)
    {   int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=ceil((double)nums[i]/k);
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) 
    {
        if (nums.size() > threshold) return -1;

        
        int high = *max_element(nums.begin(),nums.end());
        int low=1,mid;
        while(low<=high)
        {
            mid=low+(high-low)/2;
            int divi=valid(nums,mid,threshold);
            if(divi<=threshold)
            {
               
                high=mid-1;
            }
            else low=mid+1;;
        }
        return low;
    }

};