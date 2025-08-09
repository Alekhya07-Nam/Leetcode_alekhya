class Solution {
public:
    int evalRPN(vector<string>& tokens) {
         stack<int> st;
         st.push(stoi(tokens[0]));
         int i=0;
         while(i<tokens.size()){
            if(tokens[i]=="+" or tokens[i]=="-" or tokens[i]=="*" or tokens[i]=="/"){
                if(!st.empty()){
                    int b=st.top();
                    st.pop();
                    int a=st.top();
                    st.pop();
                    if(tokens[i]=="+"){
                        st.push(a+b);
                    }
                    else if(tokens[i]=="*"){
                        st.push(a*b);
                        
                    }
                    else if(tokens[i]=="-"){
                        st.push(a-b);
                        
                    }
                    else{
                        st.push(a/b);
                        
                    }
                    cout<<st.top();
                }
            }
            else{
                st.push(stoi(tokens[i]));
            }
            i++;
         }
         return st.top();
    }
};