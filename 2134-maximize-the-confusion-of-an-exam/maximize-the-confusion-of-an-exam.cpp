class Solution {
public:
    int calMax(string s, char c, int k){
        int i=0, m=0, cnt=0;
        for(int j=0;j<s.size();j++){
            if(s[j]==c){
                cnt++;
            }
            while(cnt>k){
                if(s[i]==c){
                    cnt--;
                }
                i++;
            }
            m=max(m, j-i+1);
        }
        return m;
    }
    int maxConsecutiveAnswers(string answerKey, int k) {
        return max(calMax(answerKey, 'T', k), calMax(answerKey, 'F', k));
    }
};