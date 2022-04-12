class Solution {
public:
    int splitArray(vector<int>& nums, int m) {
        int start = 0; int end = 0;
        for (auto a: nums){
            start = std::max(start, a);
            end += a;
        }
        while (start < end){
            long mid = start + (end - start)/2;
            if (can_split(nums, m, mid)){
                end = mid;
            }
            else{
                start = mid + 1;
            }
            std::cout<<start<<std::endl;
            std::cout<<end<<std::endl;
        }
        return end;
    }
    
    bool canSplit(vector<int>& nums, long m, long target){
        int count = 1; int sum = 0;
        for (int i = 0; i < nums.size(); ++i){
            sum += nums[i];
            if (sum > target){
                sum = nums[i];
                count++;
                if (count > m) return false;
            }
        }
        return true;
    }
};