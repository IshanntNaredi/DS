class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> arr;

        //convert int to string
        for(int num:nums){
            arr.push_back(to_string(num));
        }
        //custom comparator
        sort(arr.begin(),arr.end(),[](string a,string b){
            return a+b>b+a;
        });
        //handle all zeros
        if(arr[0]=="0"){
            return "0";
        }
        //concatenate all strings
        string ans="";
        for(string s:arr){
            ans+=s;
        }
        return ans;
    }
};