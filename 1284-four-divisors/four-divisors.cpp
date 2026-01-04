class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            int c=0;
            int t=0;
            int s=1+nums[i];
            for(int j=2;j<nums[i];j++){
                if(nums[i]%j==0){
                    if(c<2){
                        s+=j;
                        c+=1;
                        }
                    else{
                        t=1;
                        break;
                    }
                }
            }
            if(t==0 and c==2){
                cnt+=s;
                cout<<nums[i]<<" ";
            }
        }
        return cnt;
    }
};