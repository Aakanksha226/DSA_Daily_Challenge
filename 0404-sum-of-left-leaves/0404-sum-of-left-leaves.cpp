/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void  findsum(TreeNode* root,int &sum){
         if(root->left){
            //leaf check 0
            if((root->left->left==nullptr &&root->left->right==nullptr)){
                sum+=root->left->val;
            }
            findsum(root->left,sum);
        }
        if(root->right){
            findsum(root->right,sum);
        }
    }
        
    int sumOfLeftLeaves(TreeNode* root) {
        int sum = 0;
        findsum(root,sum);
        return sum;
    }
};