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
    vector<vector<int>> levelOrder(TreeNode* root) {
      
        vector<vector<int>>ans;
        if (root==nullptr)
            return ans;
          queue<TreeNode*>q;
        q.push(root);
        TreeNode*temp;
        
        while(!q.empty()){
            int levelsize= q.size();
            vector<int>currentlevel;
            for (int i=0; i< levelsize; ++i){
                 temp= q.front() ;
            q.pop();
            currentlevel.push_back(temp->val);
            
            //left 
            if(temp->left)
                q.push(temp->left);
            if(temp->right)
                q.push(temp->right);
            //right
            }
            ans.push_back(currentlevel);
       
        }
        
        return ans;
    }
};