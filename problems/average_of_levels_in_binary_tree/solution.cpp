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
    
    vector<vector<int>> bfs(TreeNode* root){
        vector<vector<int>> result ; 
        queue<TreeNode*> q ; 
        q.push(root); 
        while(!q.empty()){
            vector<int> v ;
            int len = q.size(); 
            for(int i =0;i<len;i++){
                TreeNode* temp = q.front(); 
                v.push_back(temp->val);
                q.pop(); 
                if(temp->left){
                    q.push(temp->left);
                }
                if(temp->right){
                    q.push(temp->right);
                }
            }
             result.push_back(v); 
           
        }
        return result ;
    }
    
    vector<double> averageOfLevels(TreeNode* root) {
        vector<vector<int>> result = bfs(root); 
        vector<double> finalRes; 
        for(auto v : result){
            double sum =0, count =v.size() ;
            for(auto num : v){
                sum+=(double) num; 
            }
            finalRes.push_back(sum/count); 
        }
        return finalRes ; 
    }
};