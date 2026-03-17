class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {

        int low = 1;
        int high = *max_element(piles.begin(), piles.end());

        while(low <= high){

            int mid = low + (high - low) / 2;

            long long totalhours = func(piles, mid);

            if(totalhours <= h)
                high = mid - 1;
            else
                low = mid + 1;
        }

        return low;
    }

    long long func(vector<int>& piles, int mid){

        long long totalhours = 0;

        for(int i = 0; i < piles.size(); i++){
            totalhours += (piles[i] + mid - 1) / mid;
        }

        return totalhours;
    }
};