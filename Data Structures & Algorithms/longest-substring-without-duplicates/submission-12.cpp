class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        std::unordered_set<char>inventory;

        int left = 0;
        int res =0;
        for(int right = 0; right<s.length(); right++){

           // cout << "L: " << left << " R: " << right << endl;
            while(inventory.contains(s[right])){
                //cout << "LL: " <<left <<endl;
                inventory.erase(s[left]);
                left++;
            }
            inventory.insert(s[right]);
            int length = (right-left+1);
            res = (length>res) ?  length : res;
        }

        return res;
    }
};
