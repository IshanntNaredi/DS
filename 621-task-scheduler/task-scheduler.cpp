class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int> freq(26,0);

        for(auto task:tasks){
            freq[task-'A']++;
        }
        int maxFreq=0;

        for(int count:freq){
            maxFreq=max(maxFreq,count);
        }

        int maxCount=0;

        for(int count:freq){
            if(count==maxFreq){
                maxCount++;
            }
        }
        int candidate = (maxFreq - 1) * (n + 1) + maxCount;

        return max((int)tasks.size(), candidate);
    }
};