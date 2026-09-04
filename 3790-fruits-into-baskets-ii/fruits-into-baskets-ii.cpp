class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int ans=0;

        for(int i=0;i<fruits.size();i++){
                bool found=false;
            for(int j=0;j<baskets.size();j++){
                if(baskets[j]!=0 && baskets[j]>=fruits[i]){
                    baskets[j]=0;
                    found=true;
                    break;
                }
            }
            if(found==false){
                ans++;
            }
        }
        return ans;
    }
};