class Solution {
public:
    const long long MOD = 1e9 + 7;

    long long modPow(long long base, long long exp) {
        long long result = 1;
        while (exp > 0) {
            if (exp % 2 == 1) result = (result * base) % MOD;
            base = (base * base) % MOD;
            exp /= 2;
        }
        return result;
    }

    vector<int> productQueries(int n, vector<vector<int>>& queries) {
        int temp = n;
        vector<int> vec;
        string s = "";
        while (n > 1) {
            if (n % 2 != 0) {
                s += "1";
            } else {
                s += "0";
            }
            n = n / 2;
        }
        if (n == 1) {
            s += "1";
        }
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '1') {
                vec.push_back((1LL << i) % MOD);
            }
        }

        vector<long long> pref;
        long long p = 1;
        for (int i = 0; i < vec.size(); i++) {
            p = (p * vec[i]) % MOD;
            pref.push_back(p);
        }

        vector<int> res;
        for (int i = 0; i < queries.size(); i++) {
            int l = queries[i][0], r = queries[i][1];
            long long ans;
            if (l == 0) {
                ans = pref[r] % MOD;
            } else if (l == r) {
                ans = vec[r] % MOD;
            } else {
                ans = (pref[r] * modPow(pref[l - 1], MOD - 2)) % MOD;
            }
            res.push_back(ans);
        }
        return res;
    }
};
