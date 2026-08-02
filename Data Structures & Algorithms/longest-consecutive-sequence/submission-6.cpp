class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        std::unordered_set <int> inventory;

        for (int m : nums){
            inventory.insert(m);
        }

        int max = 0; int count = 0;

        for(auto &elem : inventory){
            if (!inventory.contains(elem - 1)) {
                count = 1;
                int index = elem;
                while (inventory.contains(index+1)){
                    index++;
                    count++;
                }

                max = (count>=max) ? count : max;
            }
        }   
        return max;
    }
};