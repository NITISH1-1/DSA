class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int maxSoFar = INT_MIN;
        int maxEndingHere = 0;

        for(int i = 0; i<nums.size(); i++) {
            maxEndingHere += nums[i];
            maxSoFar = std::max(maxEndingHere, maxSoFar);
            if(maxEndingHere < 0){
                maxEndingHere = 0;
            }
        }
        return maxSoFar;
    }
};