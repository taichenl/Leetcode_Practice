class Solution {
public:
    string getSmallestString(int n, int k) {
        string result (n, 'a');
        k -= n;
        int i = n - 1;
        while (k > 0){
            int temp = min(k, 25);
            k-= temp;
            result[i--]+= temp;
        }
        return result;
    }
};