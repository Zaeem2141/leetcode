class Solution {
public:
    int divide(int dividend, int divisor) {
         // Edge case handling
        if (dividend == INT_MIN && divisor == -1) {
            return INT_MAX; // overflow case
        }
        
        // Determine the sign of the result
        bool isNegative = (dividend < 0) != (divisor < 0);
        
        // Work with positive values to simplify the process
        long long absDividend = abs((long long)dividend);
        long long absDivisor = abs((long long)divisor);
        
        long long quotient = 0;
        
        // Try to subtract multiples of the divisor from the dividend
        while (absDividend >= absDivisor) {
            long long tempDivisor = absDivisor, numDivisors = 1;
            
            // Double the divisor as much as possible
            while (absDividend >= (tempDivisor << 1)) {
                tempDivisor <<= 1; // equivalent to tempDivisor *= 2
                numDivisors <<= 1; // equivalent to numDivisors *= 2
            }
            
            // Subtract the largest multiple of the divisor that fits into the dividend
            absDividend -= tempDivisor;
            quotient += numDivisors;
        }
        
        // Apply the sign to the quotient
        if (isNegative) {
            quotient = -quotient;
        }
        
        // Handle overflow cases based on the 32-bit signed integer limits
        if (quotient < INT_MIN) {
            return INT_MIN;
        } else if (quotient > INT_MAX) {
            return INT_MAX;
        }
        
        return (int)quotient;
    }
};