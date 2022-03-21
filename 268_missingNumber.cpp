class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int size = nums.size();
        int ans = 0;
        for (int i = 0; i < nums.size(); ++i){
            ans ^= nums[i];
            ans ^= i;
        }
        ans ^= size;
        return ans;
    }
};