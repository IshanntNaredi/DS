class Solution {
public:
    int reverseDegree(string s) {
        int sum=0;
        for(int i=0;i<s.length();i++){
            int reverseValue='z' - s[i] + 1;
            int position=i+1;

            int contribution=reverseValue * position;
            sum+=contribution;
        }
        return sum;
    }
};