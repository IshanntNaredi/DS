class Solution {
public:
    bool checkRecord(string s) {
        int absent=0;
        int late=0;

        for(int i=0;i<s.length();i++){
            if(s[i]=='A'){
                absent++;
                late=0;
            }
            if(s[i]=='L'){
                late++;
            }
            if(s[i]=='P'){
                late=0;
            }
            if( absent>=2 || late>=3) return false;
        }
        return true;
    }
};