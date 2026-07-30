#include <iostream>
class Solution {
   public:
    bool hasDuplicate(vector<int>& nums) {
        vector<int> seenNums;
        for (int i = 0; i < nums.size(); i++) {
            if (std::ranges::contains(seenNums, nums[i])) {
                return true;
            } else {
                seenNums.push_back(nums[i]);
            }
        }

        // for (int num : seenNums) {
        //     std::cout << num << endl;
        // }

        // for (int num : nums) {
        //     std::cout << num << endl;
        // }
        // std::cout << "what" << endl;

        return false;
    }
};