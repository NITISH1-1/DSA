class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if (n == 0) return;

        // normalize k so it's within array bounds
        k %= n;
        if (k == 0) return;

        // step 1: copy last k elements
        vector<int> lastDigits;
        lastDigits.reserve(k);
        for (int i = n - k; i < n; i++) {
            lastDigits.push_back(nums[i]);
        }

        // step 2: shift remaining elements to the right
        for (int i = n - 1; i >= k; i--) {
            nums[i] = nums[i - k];
        }

        // step 3: place back the saved elements
        for (int i = 0; i < k; i++) {
            nums[i] = lastDigits[i];
        }
    }
};