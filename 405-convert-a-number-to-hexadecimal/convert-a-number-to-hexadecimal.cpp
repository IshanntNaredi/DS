class Solution {
public:
    string toHex(int num) {

       if(num==0) return "0";
       string hex="0123456789abcdef";
       string ans;

      for (int i = 0; i < 8; i++) {
            int digit = num & 15;
            ans += hex[digit];
            num >>= 4;
        }

        while (ans.back() == '0')
            ans.pop_back();

       reverse(ans.begin(),ans.end());

       return ans;
    }
};