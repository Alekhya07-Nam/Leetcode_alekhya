class Solution {
public:
char increament(string newString,int k){
            if(newString.size()>=k){
                return newString[k-1];
            }
            int n=newString.size();
            for(int i=0;i<n;i++){
                newString+='a' + (newString[i] - 'a' + 1) % 26;
            }
            return increament(newString, k);
      }  
    char kthCharacter(int k) {
      string newString="a";
      return increament(newString,k);
    }
};