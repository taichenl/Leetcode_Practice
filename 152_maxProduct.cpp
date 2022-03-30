class Solution {
public:
    int maxProduct(vector<int>& nums) {
        if (nums.size() == 0) return 0;
        if (nums.size() == 1) return nums[0];
        int max = nums[0];
        int low = max;
        int high = max;
        for (int i = 1; i < nums.size(); ++i){
            if (nums[i] < 0) swap(high, low);
            // std::cout<<high<<std::endl;
            high = std::max(nums[i], high* nums[i]);
            low = std::min(nums[i], low* nums[i]);
            max = std::max(high, max);
            // std::cout<<high<<std::endl;
        }
        return max;
    }
};