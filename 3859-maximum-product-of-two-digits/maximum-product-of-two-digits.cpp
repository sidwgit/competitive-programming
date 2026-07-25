class Solution {
public:
    int maxProduct(int n) {
        int e1 = 0, e2 = 0;
        while (n > 0) {
            int x = n % 10;
            if (x > e1) {
                e2 = e1;
                e1 = x;
            } else if (x > e2) {
                e2 = x;
            }
            n /= 10;
        }
        return e1 * e2;
    }
};