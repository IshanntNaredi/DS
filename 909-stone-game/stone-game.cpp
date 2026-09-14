class Solution {
public:
    int solve(vector<int>& piles,int l,int r,vector<vector<int>>& memo){
        if(l == r) return piles[l];

        if(memo[l][r] != INT_MIN){
            return memo[l][r];
        }
        int left = piles[l] - solve(piles,l+1,r,memo);
        int right = piles[r] - solve(piles,l,r-1,memo);

        memo[l][r] = max(left,right);
        return memo[l][r];
    }
    bool stoneGame(vector<int>& piles) {
        int n = piles.size();

        vector<vector<int>> memo(n,vector<int>(n,INT_MIN));

        return solve(piles,0,n-1,memo) > 0;
    }
};