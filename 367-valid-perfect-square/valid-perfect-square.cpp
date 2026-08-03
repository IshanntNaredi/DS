class Solution {
public:
    bool isPerfectSquare(int num) {
        int left=1;
        int right=num;

        while(left<=right){
            long long mid=left+(right-left)/2;
            long long square=mid*mid;
            if(square==num){
                return true;
            }else if(square>num){
                right=mid-1;
            }else{
                left=mid+1;
            }
        }
        return false;
    }
};