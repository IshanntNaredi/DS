class Solution {
public:
    int robRange(vector<int>& nums,int start,int end){
        int prev1=0;
        int prev2=0;

        for(int i=start;i<=end;i++){
            int current=prev1;

            if(prev2+nums[i]>current){
                current=prev2+nums[i];
            }
            prev2=prev1;
            prev1=current;
        }
        return prev1;
    }
    int rob(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        //case1 dont rob last house
        int case1=robRange(nums,0,nums.size()-2);
        //case2 dont rob first house
        int case2=robRange(nums,1,nums.size()-1);

        return case1 > case2 ? case1 : case2;
    }
};