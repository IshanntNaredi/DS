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
    int ans=0;
    pair<int,int> helper(TreeNode* node){
        if(node==NULL){
            return {0,0};
        }
        pair<int,int> left=helper(node->left);
        pair<int,int> right=helper(node->right);
        
        int sum = left.first + right.first + node->val;
        int count = left.second + right.second + 1;

        int avg=sum/count;
        if(node->val==avg){
            ans++;
        }
        return {sum,count};
    }

    int averageOfSubtree(TreeNode* root) {
        helper(root);
        return ans;
    }
};