class Solution {
   public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> output;

        int productAll = 1;
        int zeroFlag = 0;
        for (int m : nums) {
            if (m == 0) {
                productAll = productAll * 1;
                zeroFlag++;
            } else {
                productAll = productAll * m;
            }
        }

        for (int m : nums) {
            if (m == 0) {
                if(zeroFlag >1){ output.push_back(0); } else{
                    output.push_back(productAll / 1);
                }
                
            } else {
                if (zeroFlag > 0) {
                    output.push_back(0);
                } else {
                    output.push_back(productAll / m);
                }
            };
        }
        return output;
    }
};
