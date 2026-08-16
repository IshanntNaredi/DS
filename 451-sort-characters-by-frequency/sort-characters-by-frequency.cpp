class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> freq;
        //count frequency
        for(char ch : s){
            freq[ch]++;
        }
        //store character and frequency
        vector<pair<char,int>> v;
        for(auto x : freq){
            v.push_back(x);
        }
        //sorting by frequency in descending order
        sort(v.begin(),v.end(),[](auto a,auto b){
            return a.second>b.second;
        });
        string ans="";
        for(auto x : v){
            ans.append(x.second,x.first);
        }
        return ans;
    }
};