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
    vector<int> ans;
    
    void DFS(TreeNode* node){
        if(node == NULL)
            return;
        
        if(node->left != NULL)
            DFS(node->left);
        
        ans.push_back(node->val);
        
        if(node->right != NULL)
            DFS(node->right);
        
        
    }
    
    vector<int> inorderTraversal(TreeNode* root) {
        
        if(root == NULL)
            return ans;
        
        DFS(root);
        
        
        
        return ans;
    }
};
