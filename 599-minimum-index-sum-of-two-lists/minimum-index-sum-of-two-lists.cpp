class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<string,int> mp;
        
        for(int i=0;i<list2.size();i++){
            mp[list2[i]]=i;
        }

        int minSum=INT_MAX;
        vector<string> answer;
        
        for(int i=0;i<list1.size();i++){
        
            if(mp.find(list1[i])!=mp.end()){
            
                int indexSum=i+mp[list1[i]];
            
                if(indexSum<minSum){
                    minSum=indexSum;
                    answer.clear();
                    answer.push_back(list1[i]);
                }
                else if(indexSum==minSum){
                    answer.push_back(list1[i]);
                }
            }
        }
        return answer;
    }
};