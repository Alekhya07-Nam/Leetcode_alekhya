/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int pairSum(ListNode* head) {
        int len=0;
        ListNode* temp1=head;
        while(temp1){
            len+=1;
            temp1=temp1->next;
        }
        int mid=len/2;
        stack<int> st;
        while(mid>0){
            st.push(head->val);
            head=head->next;
            mid-=1;
        }
        int max=0;
        while(!st.empty() and head){
            int sum=head->val+st.top();
            if(max<sum){
                max=sum;
            }
            st.pop();
            head=head->next;
        }
        return max;
    }
};