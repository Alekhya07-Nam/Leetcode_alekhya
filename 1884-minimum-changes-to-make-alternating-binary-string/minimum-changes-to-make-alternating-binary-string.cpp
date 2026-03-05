class Solution {
public:
    int minOperations(string s) {
       string s1="";
       int n=s.size();
       while(n>0){
            s1+="01";
            n-=2;
       }
       string s2="";
       int m=s.size();
       while(m>0){
            s2+="10";
            m=m-2;
       }
       int c1=0;
       for(int i=0;i<s.size();i++){
            if(s[i]!=s1[i]){
                c1+=1;
            }
       }
       int c2=0;
       for(int i=0;i<s.size();i++){
            if(s[i]!=s2[i]){
                c2+=1;
            }
       } 
       if(c1>c2){
        return c2;
       }
       else{
        return c1;
       }
    }
};