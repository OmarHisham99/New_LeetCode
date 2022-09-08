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
    vector<int> result; 
    vector<int> inorderTraversal(TreeNode* root) {
        helper(root); 
        return result; 
    }
    void helper(TreeNode* node){
        if(node==nullptr){
            return ; 
        }
        helper(node->left); 
        result.push_back(node->val); 
        helper(node->right); 
    }
        
};