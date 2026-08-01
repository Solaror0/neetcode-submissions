class Solution {
   public:
    int maxArea(vector<int>& heights) {
        int right = std::size(heights) - 1;
        int left = 0;
        int width = right - left;
        int multiple = 0;
        int currentMultiple;

        int leftTower, rightTower;
        while (true) {
            leftTower = heights[left];
            rightTower = heights[right];
            int height = (leftTower > rightTower) ? rightTower : leftTower;
             width = right - left;
            currentMultiple = height * width;
           
            multiple = (currentMultiple > multiple) ? currentMultiple : multiple;
            
            std::cout << "O - L: " << left << " R: " << right << " LT:  " << leftTower
                      << " RT: " << rightTower << " M: " << currentMultiple << " LM: " << multiple
                      << " H: " << height << " W: " << width << endl;
            if (leftTower >= rightTower) {
                right--;
            } else {
                left++;
            }

            if (left == right) {
                break;
            }
        }
        return multiple;
    }
};
