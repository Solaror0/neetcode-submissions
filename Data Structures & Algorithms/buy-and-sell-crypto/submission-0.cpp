class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int left = 0;  int right = 1;
        int max = 0;
        
        if(size(prices)==1){return 0;}

        while (right < size(prices)){
            int current = prices[left];
            int future = prices[right];
            int profit = future-current;
            max = (profit>max) ? profit : max;

            if(future<current){
                left=right;
                right++;
            } else {right++;} 
            

        }
        return max;
    }
};
