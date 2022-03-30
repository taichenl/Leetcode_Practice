class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> h;
        stack<int> s;
        for (int i = 0; i < nums2.size(); ++i){
            while (!s.empty() && s.top() < nums2[i]){
                h[s.top()] = nums2[i];
                s.pop();
            }
            s.push(nums2[i]);
        }
        vector<int> result;
        for (auto a: nums1){
            result.push_back(h.count(a)? h[a]: -1);
        }
        return result;
    }
};