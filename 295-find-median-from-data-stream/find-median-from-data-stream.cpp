class MedianFinder {
public:
    vector<int> vec;
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        int ans=fun(num);
        vec.insert(vec.begin()+ans, num);
    }
    
    double findMedian() {
        int n=vec.size();
        if(n%2!=0){
            return (double)vec[n/2];
        }
        else{
            return (vec[n/2]+vec[(n/2)-1])/2.0;
        }
    }
    int fun(int val){
        int n=vec.size();
        if(n==0){
            return 0;
        }
        int s=0, e=n-1, m;
        while(s<=e){
            m=(s+e)/2;
            if(vec[m]==val){
                return m;
            }
            else if(vec[m]>val){
                e=m-1;
            }
            else{
                s=m+1;
            }
        }
        return s;
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */