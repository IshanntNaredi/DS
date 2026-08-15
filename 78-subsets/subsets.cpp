class Solution {
public:
    void helper(int index,vector<int>& nums,vector<int>& subset,vector<vector<int>>& answer){
        if(index==nums.size()){
            answer.push_back(subset);
            return;
        }
        //Take nums[index]
        subset.push_back(nums[index]);
        helper(index+1,nums,subset,answer);
        //Backtrack
        subset.pop_back();
        //Dont take nums[index]
        helper(index+1,nums,subset,answer);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> answer;
        vector<int> subset;

        helper(0,nums,subset,answer);

        return answer;
    }
};