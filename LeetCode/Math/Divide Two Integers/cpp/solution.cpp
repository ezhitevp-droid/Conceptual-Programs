class Solution {
public:
    int divide(int dividend, int divisor) {
        // Handle overflow
        if (dividend == INT_MIN && divisor == -1)
            return INT_MAX;

        // Count sign
        bool negative = (dividend < 0) ^ (divisor < 0);

        // Make both numbers negative to avoid overflow
        long long dvd = labs(dividend);
        long long dvs = labs(divisor);

        long long result = 0;

        // Subtract divisor multiplied by powers of 2
        while (dvs <= dvd) {
            long long temp = dvs, multiple = 1;

            // Shift divisor until it's just smaller than dividend
            while ((temp << 1) <= dvd) {
                temp <<= 1;
                multiple <<= 1;
            }

            dvd -= temp;
            result += multiple;
        }

        return negative ? -result : result;
    }
};
