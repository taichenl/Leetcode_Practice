class Solution {
public:
    int rob(vector<int>& nums) {
        //take the first house
        if (nums.size() == 0) return 0;
        if (nums.size() == 1) return nums[0];
        int prev = 0;
        int current = nums[0];
        for (int i = 1; i < nums.size() - 1; ++i){
            int temp = current;
            current = std::max(current, prev + nums[i]);
            prev = temp;
        }
        int result = current;
        prev = 0;
        current = nums[1];
        for (int i = 2; i < nums.size(); ++i){
            int temp = current;
            current = std::max(current, prev + nums[i]);
            prev = temp;
        }
        
        return std::max(result, current);
    }
};