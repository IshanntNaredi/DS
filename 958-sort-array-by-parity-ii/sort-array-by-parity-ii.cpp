class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int evenIndex=0;
        int oddIndex=1;
        while(evenIndex<nums.size() && oddIndex<nums.size()){
            if(nums[evenIndex]%2==0){
                evenIndex+=2;
            }else if(nums[oddIndex]%2==1){
                oddIndex+=2;
            }else{
                swap(nums[evenIndex],nums[oddIndex]);
                evenIndex+=2;
                oddIndex+=2;
            }
        }
        return nums;
    }
};