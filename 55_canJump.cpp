class Solution {
public:
    bool canJump(vector<int>& nums) {
        if (nums.size() == 0) return true;
        int far = 0;
        for (int i = 0; i < nums.size() - 1; ++i){
            far = std::max(far, i + nums[i]);
            if (far <= i) return false;
        }
        return true;
    }
};