class Solution {
public:
    double myPow(double x, int n) {
        if (x == 0) return 0; 
        int sign = (x < 0 && n % 2 != 0) ? -1 : 1;
        x = abs(x);
        return exp(n * log(x)) * sign;
    }
};