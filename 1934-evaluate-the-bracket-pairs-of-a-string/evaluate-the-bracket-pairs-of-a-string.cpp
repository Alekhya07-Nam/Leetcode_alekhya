class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        map<string, string> mpp;

        for (int i = 0; i < knowledge.size(); i++) {
            mpp[knowledge[i][0]] = knowledge[i][1];
        }

        string newStr = "";

        for (int i = 0; i < s.size(); i++) {

            if (s[i] != '(') {
                newStr += s[i];
            }
            else {
                string temp = "";
                i++; 
                while (s[i] != ')') {
                    temp += s[i];
                    i++;
                }

                if (mpp.find(temp) != mpp.end()) {
                    newStr += mpp[temp];
                }
                else {
                    newStr += '?';
                }
            }
        }

        return newStr;
    }
};