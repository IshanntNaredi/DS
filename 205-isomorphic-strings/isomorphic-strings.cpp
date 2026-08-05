class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> sTot;
        unordered_map<char,char> tTos;

        for(int i=0;i<s.length();i++){
            //If s[i] already has a mapping,it must match t[i]
            if(sTot.count(s[i])){
                if(sTot[s[i]]!=t[i]){
                    return false;
                }
            }else{ //otherwise create new mapping
                //t[i] already ampped to another character
                if(tTos.count(t[i])){
                    return false;
                }

                sTot[s[i]]=t[i];
                tTos[t[i]]=s[i];
            }
        }
        return true;
    }
};