class Solution {
public:
    int myAtoi(string s) {
        int i = 0, n = s.length();
        long long number = 0;
        int sign = 1;

        // 1. Ignore leading whitespaces
        while (i < n && s[i] == ' ') i++;

        // 2. Handle optional sign
        if (i < n && (s[i] == '+' || s[i] == '-')) {
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }

        // 3. Convert digits to integer
        while (i < n && s[i] >= '0' && s[i] <= '9') {
            number = number * 10 + (s[i] - '0');

            // 4. Handle overflow
            if (sign == 1 && number > INT_MAX) return INT_MAX;
            if (sign == -1 && -number < INT_MIN) return INT_MIN;

            i++;
        }

        // 5. Return the final value with the sign applied
        return static_cast<int>(sign * number);
    }
};