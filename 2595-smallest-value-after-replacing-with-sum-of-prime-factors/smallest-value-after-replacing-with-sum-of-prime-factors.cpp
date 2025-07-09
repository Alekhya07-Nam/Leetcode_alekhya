class Solution {
public:
    bool isPrime(int n) {
        if(n < 2) return false;
        for(int i = 2; i * i <= n; i++) {
            if(n % i == 0) return false;
        }
        return true;
    }

    int smallestValue(int n) {
        while(isPrime(n) == false) {
            int s = 0, t = n;
            for(int i = 2; i <= t; i++) {
                while(n % i == 0 && isPrime(i)) {
                    s += i;
                    n /= i;
                }
            }
            if(s == t) return s;
            n = s;
        }
        return n;
    }
};
