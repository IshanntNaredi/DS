class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> freq(26,0);
        //count characters in magazine
        for(char ch:magazine){
            freq[ch-'a']++;
        }
        //use characters for ransomnote
        for(char ch:ransomNote){
            freq[ch-'a']--;

            if(freq[ch-'a']<0){
                return false;
            }
        }
        return true;
    }
};