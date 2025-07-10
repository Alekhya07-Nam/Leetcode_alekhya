class Solution {
public:
    string smallestPalindrome(string s) {
        int n=s.size();
        int m=n/2;
        sort(s.begin(), s.begin()+m);
        // reverse(s.begin(), s.begin()+m);
        if(n%2!=0){
            m++;
        }
        sort(s.begin()+m, s.end());
        reverse(s.begin()+m, s.end());
        return s;
    }
};