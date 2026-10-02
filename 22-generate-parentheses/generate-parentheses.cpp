class Solution {
public:
    void drinker(int close,int open, string s,int n,vector<string>&v){
          
          if(open==n and close==n){
              v.push_back(s);
              return;
          }
          if (open<=n){
            drinker(close,open+1,s+'(',n,v);
              
          }
          if(open>close){
            drinker(close+1,open,s+')',n,v);
          }
    }  
    vector<string> generateParenthesis(int n) {
        vector<string>v;
        drinker(0,0,"",n,v);
        return v;
    }
};