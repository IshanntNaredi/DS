class Solution {
public:
    int titleToNumber(string columnTitle) {
        int result=0;
        for(auto ch:columnTitle){
            int value = ch - 'A' + 1;
            result = result * 26 + value;
        }
        return result;
    }
};