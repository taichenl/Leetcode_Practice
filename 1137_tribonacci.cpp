class Solution {
public:
    int tribonacci(int n) {
        if (n <= 1) return n;
        if (n == 2) return 1;
        int a = 0;
        int b = 1;
        int c = 1;
        for (int i = 3; i < n + 1; ++i){
            int sum = a + b + c;
            a = b;
            b = c;
            c = sum;
        }
        return c;
    }
};