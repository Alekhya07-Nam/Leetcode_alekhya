class Skiplist {
public:
    map<int,int> mpp;
    Skiplist() {
        
    }
    
    bool search(int target) {
        if(mpp.find(target)!=mpp.end()){
            return 1;
        }
        return 0;
    }
    
    void add(int num) {
        mpp[num]+=1;
    }
    
    bool erase(int num) {
        if(mpp.find(num)!=mpp.end()){
            if(mpp[num]==1){
                mpp.erase(num);
            }
            else{
                mpp[num]-=1;
            }
            return true;
        }
        return false;
    }
};

/**
 * Your Skiplist object will be instantiated and called as such:
 * Skiplist* obj = new Skiplist();
 * bool param_1 = obj->search(target);
 * obj->add(num);
 * bool param_3 = obj->erase(num);
 */