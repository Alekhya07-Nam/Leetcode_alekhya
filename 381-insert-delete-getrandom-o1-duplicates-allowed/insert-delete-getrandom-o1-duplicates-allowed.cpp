class RandomizedCollection {
public:
    unordered_map<int,int> mpp;
    vector<int>vec;
    RandomizedCollection() {
        
    }
    
    bool insert(int val) {
        if(mpp.find(val)==mpp.end()){
            mpp[val]=1;
             vec.push_back(val);
            return true;
        }
        else{
            mpp[val]+=1;
             vec.push_back(val);
            return false;
        }
       
    }
    
    bool remove(int val) {
        if(mpp.find(val)==mpp.end()){
            return false;
        }
        else{
            mpp[val]-=1;
            if(mpp[val]==0){
                mpp.erase(val);
            }
            auto it=find(vec.begin(), vec.end(), val);
            if(it!=vec.end()){
            vec.erase(it);
            }
            return true;
        }
    }
    
    int getRandom() {
        int n=vec.size();
        int temp=rand()%n;
        return vec[temp];
    }
};

/**
 * Your RandomizedCollection object will be instantiated and called as such:
 * RandomizedCollection* obj = new RandomizedCollection();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */