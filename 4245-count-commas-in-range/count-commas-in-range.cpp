class Solution {
public:
    int countCommas(int n) {
        int ans=0;
        for(int x=1; x<=n; x++){
            int temp=x;
            int digits=0;
            while(temp>0){
                temp=temp/10;
                digits++;
            }
            int commas=(digits - 1) / 3;
            ans += commas;
        }
        return ans;
    }
};