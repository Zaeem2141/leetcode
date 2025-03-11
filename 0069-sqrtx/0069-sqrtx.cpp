class Solution {
public:
    int mySqrt(int x) {
        if (x == 0) return 0;

        long long n = x;
        while (n * n > x) { 
            n = (n + x / n) / 2;
        }
        return n;
    }
};
