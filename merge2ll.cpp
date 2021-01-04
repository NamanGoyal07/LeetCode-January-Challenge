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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1==NULL && l2==NULL) return l1;
        if(l1==nullptr) return l2;
        if(l2==nullptr) return l1;
        
        ListNode* ans = new ListNode(-1);
        ListNode* root=ans;
        while(l1!=nullptr && l2!=nullptr){
            if(l1->val<=l2->val){
                root->next=l1;
                l1=l1->next;
                root->next->next=nullptr;
                root=root->next;
            }
            else{
                root->next=l2;
                l2=l2->next;
                root->next->next=nullptr;
                root=root->next;
            }
        }
        
        if(l1) root->next=l1;
        if(l2) root->next=l2;
        
        return ans->next;
    }
};
