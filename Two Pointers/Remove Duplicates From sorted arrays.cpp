class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty()) return 0;
        int pt1 = 1;
        for(int i = 1; i<nums.size(); i++){
            if(nums[i] != nums[i-1]){
                nums[pt1] = nums[i];
                pt1++;

            }
        }
        return pt1;
    }
};