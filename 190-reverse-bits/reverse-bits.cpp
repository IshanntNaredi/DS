class Solution {
public:
    int reverseBits(int n) {
        uint32_t result=0;
        for(int i=0;i<32;i++){
            uint32_t bit= n & 1;
            result = result << 1;
            result = result + bit;
            n = n >> 1;
        }
        return result;
    }
};