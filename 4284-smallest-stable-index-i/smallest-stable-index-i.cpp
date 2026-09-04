class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        vector<int> minRight(nums.size());
        minRight[nums.size()-1]=nums.back();

        for(int i=nums.size()-2;i>=0;i--){
            minRight[i]=min(nums[i],minRight[i+1]);
        }
        int maxLeft=nums[0];
        for(int i=0;i<nums.size();i++){
            maxLeft=max(nums[i],maxLeft);

            if(maxLeft - minRight[i] <= k){
                return i;
            }
        }
        return -1;
    }
};