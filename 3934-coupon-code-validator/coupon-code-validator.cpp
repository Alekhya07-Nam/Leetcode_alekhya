class Solution {
public:
    vector<string> validateCoupons(vector<string>& code, vector<string>& businessLine, vector<bool>& isActive) {
        vector<string> v;
        vector<string> e;
        vector<string> g;
        vector<string> p;
        vector<string> r;
        for(int i=0;i<code.size();i++){
            if(isActive[i] == true){
                if(businessLine[i] == "electronics" || businessLine[i] == "grocery" || businessLine[i] == "pharmacy" || businessLine[i] == "restaurant"){
                    if(code[i] != ""){
                    bool flag = true;
                    for(auto j:code[i]){
                    if(isalnum(j) || (j == '_')){
                        
                    }else{
                        flag = false;
                        cout << j << "  " << flag << endl;
                        break;
                    }
                    }
                    if(flag){
                       if(businessLine[i] == "electronics") e.push_back(code[i]);
                       else if(businessLine[i] == "grocery") g.push_back(code[i]);
                       else if(businessLine[i] == "pharmacy") p.push_back(code[i]);
                       else r.push_back(code[i]);
                    }
                    }
                }
            }
        }
        sort(e.begin(),e.end());
        sort(g.begin(),g.end());
        sort(p.begin(),p.end());
        sort(r.begin(),r.end());
        v.insert(v.end(), e.begin(), e.end()); 
        v.insert(v.end(), g.begin(), g.end()); 
        v.insert(v.end(), p.begin(), p.end());
        v.insert(v.end(), r.begin(), r.end());
        return v;
    }
};