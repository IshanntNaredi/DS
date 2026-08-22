class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp;

        mp[0]=1;
        int count=0;
        int currentSum=0;

        for(int i=0;i<nums.size();i++){
            currentSum+=nums[i];
            int needed=currentSum-k;
            if(mp.find(needed)!=mp.end()){
            count+=mp[needed];
            }
            mp[currentSum]++;
        }
        return count;
    }
};