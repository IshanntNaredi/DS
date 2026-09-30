class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n=s.length();
        for(int k=1;k<n;k++){
            if(n%k!=0) continue;

            bool valid=true;
            for(int i=k;i<n;i++){
                if(s[i]!=s[i-k]){
                    valid=false;
                    break;
                }
            }
            if(valid) return true;
        }
        return false;
    }
};