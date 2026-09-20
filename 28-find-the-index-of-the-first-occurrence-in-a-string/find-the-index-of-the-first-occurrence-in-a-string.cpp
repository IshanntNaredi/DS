class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=haystack.length();
        int m=needle.length();

        if(m>n) return -1;

        for(int start=0;start<=n-m;start++){
            int j=0;
            while(j<m && haystack[start+j] == needle[j]){
                j++;
            }

            if(j == m){
                return start;
            }
        }
        return -1;
    }
};