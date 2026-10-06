class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        //Check rows
        for(int i=0;i<9;i++)
        {
            unordered_set<char> st;
            for(int j=0;j<9;j++)
            {
                char ch=board[i][j];
                if(ch=='.') continue;
                if(st.count(ch)) return false;
                st.insert(ch);
            }
        }
        //Check columns
        for(int j=0;j<9;j++)
        {
            unordered_set<char> st;
            for(int i=0;i<9;i++)
            {
                char ch=board[i][j];
                if(ch=='.') continue;
                if(st.count(ch)) return false;
                st.insert(ch);
            }
        }
        //Check 3x3 Boxes
        for(int r=0;r<9;r+=3)
        {
            for(int c=0;c<9;c+=3)
            {
                unordered_set<char> st;
                for(int i=r;i<r+3;i++)
                {
                    for(int j=c;j<c+3;j++)
                    {
                        char ch=board[i][j];
                        if(ch=='.') continue;
                        if(st.count(ch)) return false;
                        st.insert(ch);
                    }
                }
            }
        }
        return true;
    }
};