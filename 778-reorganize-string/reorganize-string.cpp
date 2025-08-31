class Solution {
public:
    string reorganizeString(string s) {
        map<char,int> mpp;
        for(int i=0;i<s.size();i++){
            mpp[s[i]]++;
        }
        priority_queue<pair<int,char>> pq;
        for(auto i:mpp){
            pq.push({i.second,i.first});
        }
        string result="";
        while(!pq.empty()){
            auto [c1,ch1]=pq.top();
            pq.pop();
            if(result.size()>0 and result[result.size()-1]==ch1){
                if(pq.empty()){
                    return "";
                    // cout<<"hi";
                }
                else{
                    auto [c2,ch2]=pq.top();
                    pq.pop();
                    result+=ch2;
                    c2--;
                    if(c2>0){
                        pq.push({c2,ch2});
                    }
                }
                pq.push({c1,ch1});
            }
            else{
                result+=ch1;
                c1--;
                if(c1>0){
                pq.push({c1,ch1});
                }
            }
        }
        return result;
    }
};