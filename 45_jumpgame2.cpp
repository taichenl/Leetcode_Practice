class Solution {
public:
    int jump(vector<int>& nums) {
        if (nums.size() == 0) return 0;
        if (nums.size() == 1) return 0;
        int count = 1;
        int current = nums[0];
        int far = current;
        for (int i = 1; i < nums.size() - 1; ++i){
            current = std::max(current, i + nums[i]);
            if (i == far){
                count ++;
                far = current;
            }
            
        }
        return count;
    }
};