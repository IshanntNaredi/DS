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
    void buildParent(TreeNode*node,TreeNode* parent,unordered_map<TreeNode* ,TreeNode* >& parentMap){
        if(node==nullptr){
            return;
        }
        if(parent!=nullptr){
            parentMap[node]=parent;
        }

        buildParent(node->left,node,parentMap);
        buildParent(node->right,node,parentMap);
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        unordered_map<TreeNode* ,TreeNode*> parentMap;

        buildParent(root,nullptr,parentMap);

        queue<pair<TreeNode*,int>> q;
        unordered_set<TreeNode*> visited;

        q.push({target,0});
        visited.insert(target);

        vector<int> ans;

        while(!q.empty()){
            auto [node,distance] = q.front();
            q.pop();

            if(distance==k){
                ans.push_back(node->val);
                continue;
            }
              // 4. Move to left child
            if (node->left != nullptr &&
                !visited.count(node->left)) {

                visited.insert(node->left);
                q.push({node->left, distance + 1});
            }

            // 5. Move to right child
            if (node->right != nullptr &&
                !visited.count(node->right)) {

                visited.insert(node->right);
                q.push({node->right, distance + 1});
            }

            // 6. Move to parent
            if (parentMap.count(node) &&
                !visited.count(parentMap[node])) {

                visited.insert(parentMap[node]);
                q.push({parentMap[node], distance + 1});
            }
        } 
        return ans;
    }
};