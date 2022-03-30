class Solution {
public:
    int rob(vector<int>& nums) {
        if (nums.size() == 0) return 0;
        int prev = 0;
        int current = nums[0];
        for (int i = 1; i < nums.size(); ++i){
            int temp = current;
            current = max(current, prev + nums[i]);
            prev = temp;
        }
        return current;
    }
};