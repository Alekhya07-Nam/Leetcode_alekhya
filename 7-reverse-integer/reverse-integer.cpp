class Solution {
public:
    int reverse(int x) {
        long long s=0;
        int t=x;
        // if(x<0){
        //     x=-1*(x);
        // }
        int r;
        // cout<<x;
        while(x){
            r=x%10;
            cout<<r;
            s=s*10+r;
            x=x/10;
        }
        // if(s>pow(2,31)-1)
        // {
        //     s=pow(2,31)-1;
        // }
        // if(t>0){
        //     return s;
        // }
        // else{
        //     s=-1*s;
        //     return s;
        // }
        if(s>=pow(-2,31) && (s<=pow(2,31)-1))
        {
            return s;
        }
        else
        {
            return 0;
        }
    }
};