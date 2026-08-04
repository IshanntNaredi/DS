class Solution {
public:
    int compress(vector<char>& chars) {
        int count = 0;
        string s = "";
        for(int i =0 ; i <chars.size() ; i++){
            count++; //count the current character
            //End of current grp
            if(i == chars.size()-1 || chars[i]!=chars[i+1]){
                    //Append character
                    s.push_back(chars[i]);

                    //Append count only if count>1
                    if(count>1){
                        s+=to_string(count);
                    }
                    count=0; //reset for next group
              }
            }

            //copy compressed string back to chars
            for(int i=0;i<s.size();i++){
                chars[i]=s[i];
            }
        return s.size();
        
    }
};