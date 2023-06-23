class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if (target < nums[0]) {
            return 0;
        }

        int index = -1;
        for (int i = 0; i < nums.size(); i++) {
            if (target == nums[i]) {
                index = i;
            }
        }

        if (index == -1) {
            for (int i = 0; i < nums.size(); i++) {
                if (target > nums[i]) {
                    index = i + 1;
                }
            }
        }
        return index;
    }
};