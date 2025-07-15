class Solution {
public:
    bool isValid(string word) {
        if(word.size()<3){
            return false;
        }
        int f1=false, f2=false;
        for(char i: word){
        if((i>='A' and i<='Z') or(i>='a' and i<='z')){
        if(i=='a' || i=='i' || i=='e' || i=='o' || i=='u' || i=='A' || i=='E' ||
        i=='O' || i=='I' || i=='U'){
            f1=true;
        }
        else{
            f2=true;
        }
        }
        else if(isdigit(i)){
            continue;
        }
        else{
            return false;
        }
        }
        if(f1==true and f2==true){
            return true;
        }
        return false;
    }
};