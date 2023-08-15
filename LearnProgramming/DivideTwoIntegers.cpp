#include<iostream>

using namespace std;

class DivideTwoIntegers {
public:
    int divide(int dividend, int divisor) {
        if (dividend == divisor)
            return 1;
        bool isPositive = (dividend < 0 == divisor < 0);
        unsigned int a = abs(dividend);
        unsigned int b = abs(divisor);
        unsigned int ans = 0;
        while (a >= b) { 
            short q = 0;
            while (a > (b << (q + 1)))
                q++;
            ans += (1 << q);
            a = a - (b << q);
        }
        if (ans == (1 << 31) and isPositive)
            return INT_MAX;
        return isPositive ? ans : -ans;
    }
};

void main() {
    DivideTwoIntegers divideTwoIntegers;
    cout << divideTwoIntegers.divide(2147483647, 1);
}