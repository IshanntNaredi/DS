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
    void helper(TreeNode* node,vector<int>& path,vector<string>& ans){
        if(node==NULL){
            return;
        }
        //add current node to path
        path.push_back(node->val);

        //if current node is leaf
        if(node->left==NULL && node->right==NULL){
            string s="";

            for(int i=0;i<path.size();i++){
                if(i>0){
                    s+="->";
                }
                s+=to_string(path[i]);
            }
            ans.push_back(s);
        }
        else{
            //explore left subtree
            helper(node->left,path,ans);

            //explore right subtree
            helper(node->right,path,ans);
        }
        //backtracking
        path.pop_back();
    }
    vector<string> binaryTreePaths(TreeNode* root) {
      vector<string> ans;
      vector<int> path;
      helper(root,path,ans);

      return ans;
    }
};