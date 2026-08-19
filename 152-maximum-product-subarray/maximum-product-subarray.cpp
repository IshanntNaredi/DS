class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans=nums[0];
        int maxProd=nums[0];
        int minProd=nums[0];
        for(int i=1;i<nums.size();i++){
            int x=nums[i];
            if(x<0){
                swap(maxProd,minProd);
            }
            int oldMax = maxProd;
            int oldMin = minProd;
            maxProd=max(x,max(oldMax * x,oldMin * x));
            minProd=min(x,min(oldMax * x,oldMin * x));
            
            ans=max(ans,maxProd);
        }
        return ans;
    }
};