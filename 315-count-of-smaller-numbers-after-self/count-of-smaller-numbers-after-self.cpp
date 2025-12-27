#include "ext/pb_ds/assoc_container.hpp"
#include "ext/pb_ds/tree_policy.hpp"
using namespace __gnu_pbds;
template<class T> 
using ordered_set = tree<T, null_type,less_equal<T>, rb_tree_tag, tree_order_statistics_node_update> ;
class Solution {
public:
    vector<int> countSmaller(vector<int>& nums) {
        ordered_set<int> st;
        vector<int> vec;
        for(int i=nums.size()-1;i>=0;i--){
            st.insert(nums[i]);
            vec.push_back(st.order_of_key(nums[i]));
        }
        reverse(vec.begin(),vec.end());
        return vec;
    }
};