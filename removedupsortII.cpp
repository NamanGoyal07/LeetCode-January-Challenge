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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==nullptr) return head;
        
        ListNode* root=head;
        ListNode* ans = new ListNode(-1);
        ListNode* prev=ans;
        
        while(root!=nullptr){
            ListNode* cur=root;
            int len=0;
            while(cur!=nullptr && cur->val==root->val){
                len++;
                cur=cur->next;
            }
            
            if(len==1){
                prev->next = root;
                root->next=nullptr;
                root=cur;
                prev=prev->next;
            }
            else{
                root=cur;
            }
        }
        
        return ans->next;
        
    }
};
