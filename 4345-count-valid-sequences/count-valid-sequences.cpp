class Solution {
public:
    static const int MOD = 1e9 + 7;

    long long modpow(long long a, long long b) {
        long long res = 1;
        while (b) {
            if (b & 1) res = res * a % MOD;
            a = a * a % MOD;
            b >>= 1;
        }
        return res;
    }

    int countValidSequences(int n, int k) {
        if (n < k) return 0;

        vector<long long> fact(n + 1), invFact(n + 1);
        fact[0] = 1;

        for (int i = 1; i <= n; i++)
            fact[i] = fact[i - 1] * i % MOD;

        invFact[n] = modpow(fact[n], MOD - 2);

        for (int i = n; i >= 1; i--)
            invFact[i - 1] = invFact[i] * i % MOD;

        auto C = [&](int N, int R) -> long long {
            if (R < 0 || R > N) return 0;
            return fact[N] * invFact[R] % MOD * invFact[N - R] % MOD;
        };

        long long ans = C(n - 1, k - 1);

        if ((n - k) % 2 == 0) {
            int S = (n - k) / 2;
            ans = (ans - C(S + k - 1, k - 1) + MOD) % MOD;
        }

        return ans;
    }
};