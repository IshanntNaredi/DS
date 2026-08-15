class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> answer;
        string row1="qwertyuiop";
        string row2="asdfghjkl";
        string row3="zxcvbnm";

        for(string word : words){
            int row=0;
            bool valid=true;
            for(char ch : word){
                ch=tolower(ch);
                int currentRow=0;
                if(row1.find(ch)!=string::npos){
                    currentRow=1;
                }else if(row2.find(ch)!=string::npos){
                    currentRow=2;
                }else{
                    currentRow=3;
                }
                if(row==0){
                    row=currentRow;
                }else if(currentRow!=row){
                    valid=false;
                    break;
                }
            }
            if(valid){
                answer.push_back(word);
            }
        }
        return answer;
    }
};