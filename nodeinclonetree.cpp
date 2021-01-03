/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* tar;
    TreeNode* ans;
    
    void inorder(TreeNode* orig,TreeNode* cloned){
        if(orig==nullptr) return;
        inorder(orig->left,cloned->left);
        if(orig==tar) ans=cloned;
        inorder(orig->right,cloned->right);
    }
    
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        tar=target;
        inorder(original,cloned);
        return ans;
    }
};
