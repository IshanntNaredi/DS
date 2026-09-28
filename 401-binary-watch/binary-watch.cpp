class Solution {
public:
    vector<string> readBinaryWatch(int turnedOn) {
        vector<string> ans;

        for(int hr=0;hr<12;hr++){
            for(int min=0;min<60;min++){
               int count=__builtin_popcount(hr) + __builtin_popcount(min);

               if(count==turnedOn){
                string time=to_string(hr) + ":";

                 if(min<10){
                    time+="0";
                    }
               time+=to_string(min);

               ans.push_back(time);
               }
            }
        }
        return ans;
    }
};