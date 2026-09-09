class Solution {
public:
    void helper(vector<int>& candidates,int start,int target,vector<int>& current,vector<vector<int>>& result){
            if(target==0){
                result.push_back(current);
                return;
            }
            if(target < 0){
                return;
            }
            for(int i=start;i<candidates.size();i++){
                current.push_back(candidates[i]);
                helper(candidates,i,target-candidates[i],current,result);
                current.pop_back();
            }
        }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> current;
        helper(candidates,0,target,current,result);
        return result;
    }
};