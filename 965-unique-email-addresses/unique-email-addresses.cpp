class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        set<string> uniqueEmail;

        for(string email : emails){
            int at=email.find('@');

            string local=email.substr(0,at);
            string domain=email.substr(at);

            string processed="";

            for(char ch : local){
                if(ch == '+'){
                    break;
                }

                if(ch == '.'){
                    continue;
                }

                processed.push_back(ch);
            }
            uniqueEmail.insert(processed + domain);
        }
        return uniqueEmail.size();
    }
};