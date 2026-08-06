class Solution {
public:
    vector<int> getOrder(vector<vector<int>>& tasks) {
        int n=tasks.size();

        //(enqueue,processing,originalIndex)
        vector<vector<int>> arr;
        for(int i=0;i<n;i++){
            arr.push_back({tasks[i][0],tasks[i][1],i});
        }

        //sort enqueue by time
        sort(arr.begin(),arr.end());

        //Min-heap {processingTime,originalIndex}
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;

        vector<int> ans;
        long long currTime=0;
        int i=0;

        while(i<n || !pq.empty()){
            //if no task is available , jump to next tasks enqueue time
            if(pq.empty()){
                currTime=max(currTime,(long long)arr[i][0]);
            }
            //push all tasks that have arrived
            while(i<n && (long long)arr[i][0]<=currTime){
                pq.push({arr[i][1],arr[i][2]});
                i++;
            }

            //execute the best task
            auto [processingTime,index]=pq.top();
            pq.pop();

            ans.push_back(index);
            currTime+=processingTime;
        }
        return ans;
    }
};