class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> words;
        stringstream ss(s);
        string word;

        while(ss>>word){
            words.push_back(word);
        }

        if(pattern.length()!=words.size()){
            return false;
        }

        unordered_map<char, string> patternMap;
        unordered_map<string, char> wordMap;

        for(int i=0;i<pattern.length();i++){
            char ch=pattern[i];
            string w=words[i];

           if(patternMap.find(ch)==patternMap.end() && wordMap.find(w)==wordMap.end()){
            patternMap[ch]=w;
            wordMap[w]=ch;
           }
           else{
            if(patternMap[ch]!=w || wordMap[w]!=ch){
                return false;
             }
           }
        } 
        return true;
    }
};