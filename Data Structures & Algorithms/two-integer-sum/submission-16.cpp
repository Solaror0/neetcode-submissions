class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map <int,int> inventory;


        for(int i = 0; i<nums.size(); i++){
            int m = nums[i];
            int second = (target-m);
            int j = inventory[m];

            std::cout << "I: "<< i << " J: " << j << endl;
            if((nums[j] + m == target) && i!=j){
                int smaller; int larger;
                smaller = (i>inventory[m]) ? inventory[m] : i;
                larger = (i>inventory[m]) ? i : inventory[m];
                return {smaller, larger};
            }

            inventory[second] = i;
           // cout << inventory[target] <<


        }
        return {0};

    }
};
