class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> result (nums.size() , -1);
        stack<int> s;
        for (int i = 0; i < nums.size()*2; ++i){
            while (!s.empty() && nums[s.top()] < nums[i%n]){
                result[s.top()] = nums[i%n];
                s.pop();
            }
            s.push(i%n);
        }
        return result;
    }
};