class Solution {
public:
    int numSquares(int n) {
         queue<int> que;
         vector<int> vec(n, 0);
         que.push(n);
         int cnt=0;
         while(!que.empty()){
            int len=que.size();
            cnt++;
            for(int i=0;i<len;i++){
                int val=que.front();
                que.pop();
                for(int j=1;j*j<=val;j++){
                    int num=val-(j*j);
                    if(num==0){
                        return cnt;
                    }
                    else if(vec[num]==0){
                        que.push(num);
                        vec[num]=0;
                    }
                }
            }
         }
         return -1;
    }
};