class Solution {
public:
    void helper(int start,int n,int k,vector<int>& curr,vector<vector<int>>& ans){
        //base case;
        if(curr.size()==k){
            ans.push_back(curr);
            return;
        }
        //try every possible number
        for(int i=start;i<=n;i++){
            curr.push_back(i);
            helper(i+1,n,k,curr,ans);
            curr.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> curr;
        helper(1,n,k,curr,ans);
        return ans;
    }
};