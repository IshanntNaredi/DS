class Solution {
public:
    int rev(int num){
        int r=0;
        while(num>0){
            r=r*10 + num%10;
            num/=10;
        }
        return r;
    }
    int countNicePairs(vector<int>& nums) {
        const int MOD=1e9+7;
        unordered_map<int,int> freq;
        long long ans=0;

        for(int num:nums){
            int diff=num-rev(num);

            ans=(ans+freq[diff]) % MOD;

            freq[diff]++;
        }
        return ans;
    }
};