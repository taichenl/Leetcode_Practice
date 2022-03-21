class Solution {
public:
    vector<int> partitionLabels(string s) {
        if (s.size() == 0) return {};
        unordered_map<char, int> h;
        for (int i = 0; i < s.size(); ++i){
            h[s[i]] = i;
        }
        vector<int> result;
        
        int start = 0; int end = h[s[0]];
        while (end < s.size()){
            int cur = start;
            while (cur < end){
                if (h[s[cur]] > end){
                    end = h[s[cur]];
                }
                cur++;
            }
            result.push_back(end - start + 1);
            if (end == s.size() -1) break;
            start = end + 1;
            end = h[s[start]];
        }
        return result;
    }
};