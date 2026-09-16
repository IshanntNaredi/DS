class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<int> sorted = score;

        sort(sorted.begin(),sorted.end(),greater<int>());

        unordered_map<int,int> mp;

        for(int i=0;i<sorted.size();i++){
            mp[sorted[i]] = i + 1;
        }

        vector<string> ans;

        for(int i=0;i<score.size();i++){
            int rank = mp[score[i]];

            if(rank==1){
                ans.push_back("Gold Medal");
            }else if(rank==2){
                ans.push_back("Silver Medal");
            }else if(rank==3){
                ans.push_back("Bronze Medal");
            }else{
                ans.push_back(to_string(rank));
            }
        }
        return ans;
    }
};