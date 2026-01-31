class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        for(char i: letters){
            if(i-'0' > target-'0'){
                return i;
            }
        }
        return letters[0];
    }
};