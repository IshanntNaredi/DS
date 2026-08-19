class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int curr=0;
        int maximum=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                curr++;
                maximum=max(maximum,curr);
            }else if(nums[i]==0){
                curr=0;
            }
        }
        return maximum;
    }
};