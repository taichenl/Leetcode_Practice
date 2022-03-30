class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int max = 0;
        int premax = values[0];
        int s = values.size();
        for (int i = 1; i < s; ++i){
            max = std::max(max, premax + values[i] - i);
            premax = std::max(premax, values[i] + i);
        }
        return max;
    }
};