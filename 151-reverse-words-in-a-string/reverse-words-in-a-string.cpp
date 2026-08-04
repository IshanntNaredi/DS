class Solution {
public:
    string reverseWords(string s) {
        vector<string> words;
        int i=0;
        while(i<s.length()){
            while(i<s.length() && s[i]==' '){
                i++;
            }
            if(i>=s.length()) break;

            int start=i;

            while(i<s.length() && s[i]!=' '){
                i++;
            }
            //store the word
            words.push_back(s.substr(start,i-start));
        }

        //build ans in reverse order
        string ans="";
        for(int j=words.size()-1;j>=0;j--){
            ans+=words[j];
            if(j!=0){
                ans+=" ";
            }
        }
        return ans;
    }
};