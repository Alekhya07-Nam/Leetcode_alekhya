class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int count =0;
       int sumleft =0;
       int totalsum=0;
       int sumright =0;
       for(int i=0; i<nums.size(); i++){  
        totalsum=totalsum+nums[i];
         
       }
       for(int i=0; i<nums.size()-1; i++){
        sumleft= sumleft+nums[i];
        sumright=totalsum-sumleft;
        if(sumright%2==sumleft%2){
            count++;
        }

       }
       return count++;

    }
};