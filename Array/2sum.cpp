#include <vector>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> copyNums = nums;

        sort(nums.begin(), nums.end());

        int l = 0, r = n - 1;
        while (l < r) {
            int sum = nums[l] + nums[r];
            if (sum < target) {
                l++;
            } else if (sum > target) {
                r--;
            } else {
                break; // found
            }
        }
    }
};
