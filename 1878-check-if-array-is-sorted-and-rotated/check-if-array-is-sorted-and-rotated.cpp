class Solution {
public:
    bool check(vector<int>& nums) {
        int breakCount=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int next=(i+1)%n;

            if(nums[i]>nums[next]){
                breakCount++; 
            }

            if(breakCount>1){
                return false;
            }
        }
        return true;
    }
};