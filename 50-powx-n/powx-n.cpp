class Solution {
public:
   double myPow(double x, int n) {
    long long n2 = n;         // handle negative n safely
    double result = 1;

    if (n2 < 0) {
        x = 1 / x;
        n2 = -n2;
    }

    while (n2 > 0) {
        if (n2 % 2 == 1) {
            result *= x;
        }
        x *= x;
        n2 /= 2;
    }

    return result;
}

};