class Solution {
public:
    string countAndSay(int n) {
        string s="1";
        for(int k=0;k<n-1;k++){
            string ans="";

            for(int i=0;i<s.size();){
                int j=i+1;

                while(j<s.size() && s[j]==s[i]){
                    j++;
                }

                int count=j-i;

                ans+=to_string(count);
                ans.push_back(s[i]);

                i=j;
            }
            s=ans;
        }
        return s;
    }
};