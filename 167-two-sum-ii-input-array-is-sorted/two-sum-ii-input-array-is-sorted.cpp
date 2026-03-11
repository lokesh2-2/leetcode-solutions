class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) 
    {
        int n = numbers.size();
        for(int i = 0; i < n; i++)
        {
            int j = search(numbers, target - numbers[i]);
            if(j != -1 && j != i)
            {
                return {min(i,j)+1, max(i,j)+1};
            }
        }

        return {};
    }

    int search(vector<int>& a, int k)
    {
        int low = 0, high = a.size() - 1;

        while(low <= high)
        {
            int mid = (low + high) / 2;

            if(a[mid] == k) return mid;
            else if(a[mid] < k) low = mid + 1;
            else high = mid - 1;
        }

        return -1;
    }
};