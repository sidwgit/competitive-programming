class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        sort(prices.rbegin(), prices.rend());
        sort(discounts.rbegin(), discounts.rend());

        long double ans = 0;

        for (int p : prices)
            ans += p;

        int n = min(prices.size(), discounts.size());

        for (int i = 0; i < n; i++)
            ans -= (long double)prices[i] * discounts[i] / 100.0;

        return (double)ans;
    }
};