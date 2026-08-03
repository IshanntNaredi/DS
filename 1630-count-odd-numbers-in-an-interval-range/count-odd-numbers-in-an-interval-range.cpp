class Solution {
public:
    int countOdds(int low, int high) {
        int ans;
        int total=high-low+1;
        if(total % 2 == 0){
            ans=total/2;
        }else{
            if(low%2!=0){
                ans=total/2+1;
            }else{
                ans=total/2;
            }
        }
        return ans;
    }
};