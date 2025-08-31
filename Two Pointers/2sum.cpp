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

        vector<int> res;
        int ll = -1, rr = -1;

        for (int i = 0; i < copyNums.size(); i++) {
            if (copyNums[i] == nums[l] && i != rr) {
                res.push_back(i);
                ll = i;
            }
            else if (copyNums[i] == nums[r] && i != ll) {
                res.push_back(i);
                rr = i;
            }
            if (res.size() == 2) break;
        }

        return res;
    }
};
