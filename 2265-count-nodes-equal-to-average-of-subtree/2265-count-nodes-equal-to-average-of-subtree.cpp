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
    int ans = 0;
     pair<int,int> solve(TreeNode* root){
        if(!root){
            return {0,0};
        }
        auto it1 = solve(root->left);
        auto it2 = solve(root->right);
        int sum = it1.first+it2.first+root->val;
        int cnt = it1.second+it2.second+1;
        if(sum/cnt == root->val){
            ans++;
        }
        return {sum,cnt};
     }
    int averageOfSubtree(TreeNode* root) {
        auto x = solve(root);
        return ans;
    }
};