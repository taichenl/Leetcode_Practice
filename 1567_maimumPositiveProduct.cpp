class Solution {
public:
    int getMaxLen(vector<int>& nums) {
        int p = 0;
        int n = 0;
        int max = 0; 
        for (auto i: nums){
            if (i > 0){
                p++;
                if (n) n++;
            }
            else if (i < 0){
                int temp = p;
                p = n ? n + 1: 0;
                n = temp + 1;
            }
            else{
                p = 0;
                n = 0;
            }
            max = std::max(max, p);
        }
        
        return max;
    }
};