class Solution {
public:
    vector<vector<string>> displayTable(vector<vector<string>>& orders) {
        set<string> food;
        set<int> table;
        map<int,map<string,int>> tableFood;

        for(auto order : orders){
            int t=stoi(order[1]);
            string f=order[2];

            table.insert(t);
            food.insert(f);
            tableFood[t][f]++;
        }
        
        vector<vector<string>> ans;
        vector<string> header;
        header.push_back("Table");

         for (auto f : food) {
            header.push_back(f);
        }
        ans.push_back(header);

         // Create rows for each table
        for (auto t : table) {
            vector<string> row;

            // Add table number
            row.push_back(to_string(t));

            // Add count of every food
            for (auto f : food) {
                row.push_back(to_string(tableFood[t][f]));
            }

            ans.push_back(row);
        }

        return ans;
    }
};