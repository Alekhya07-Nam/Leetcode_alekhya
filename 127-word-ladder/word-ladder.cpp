class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        queue<pair<string, int>> q;
        map<string,int> mpp;
        for(int i=0;i<wordList.size();i++){
            mpp[wordList[i]]++;
        }
        if(mpp.find(endWord)==mpp.end()){
            return 0;
        }
        q.push({beginWord, 1});
        while(!q.empty()){
            string tempp=q.front().first;
            int val=q.front().second;
            q.pop();
            for(int i=0;i<tempp.size();i++){
                string temp=tempp;
                for(int j=0;j<26;j++){
                    temp[i]='a'+j;
                    if(temp==endWord){
                        return val+1;
                    }
                    if(mpp.find(temp)!=mpp.end()){
                        q.push({temp, val+1});
                        mpp.erase(temp);
                    }
                }

            }
        }
        return 0;
    }
};