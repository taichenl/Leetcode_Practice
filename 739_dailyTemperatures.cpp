class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<std::pair<int, int>> s;
        int size = temperatures.size();
        vector<int> result(size, 0);
        //store all the positions 
        
        for (int i = size - 1; i >= 0; i--){
            if (!s.empty()){
                while (!s.empty() && temperatures[i] >= s.top().first){
                    s.pop();
                }
                if (s.empty()){
                    result[i] = 0;
                }
                else{
                    result[i] = s.top().second - i;
                }
            }
            s.push(std::pair<int, int> {temperatures[i], i});
        }
        return result;
    }
};