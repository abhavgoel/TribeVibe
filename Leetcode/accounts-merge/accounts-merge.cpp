class Solution {
public:
    unordered_map<string,string> parents;
    string find(string email) {
        if(parents.find(email) == parents.end()) {
            parents[email] = email;
        } else if(parents[email] != email)
            parents[email] = find(parents[email]);
        return parents[email];
    }
    
    void Union(string email1, string email2) {
        string parent1 = find(email1);
        string parent2 = find(email2);
        if(parent1 != parent2) {
            parents[parent2] = parent1;
        }
    }
    
    vector<vector<string>> accountsMerge(vector<vector<string>>& accounts) {
        unordered_map<string,string> parentNameMap; // Parent and Name Mapping
        vector<string> emails; // List of all emails;
        for(auto account : accounts) {
            string name = account.at(0);
            string parentEmail = account.at(1);
            parentNameMap[parentEmail] = name;
            for(int i=1; i<account.size(); i++) {
                string email = account.at(i);
                Union(parentEmail,email);
                emails.push_back(email);
            }
        }
        unordered_map<string,unordered_set<string>> parentEmailMap; // Maps all unique email to its parent
        for(auto email : emails) {
            string parent = find(email);
            parentEmailMap[parent].emplace(email);
        }
        vector<vector<string>> ret;
        
        for(auto parentEmail : parentEmailMap) {
            string name = parentNameMap[parentEmail.first];
            vector<string> nameEmail;
            nameEmail.push_back(name);
            vector<string> emailsForName;
            for(auto email : parentEmail.second) emailsForName.push_back(email);
            sort(emailsForName.begin(), emailsForName.end());
            nameEmail.insert(nameEmail.end(), emailsForName.begin(), emailsForName.end());
            ret.push_back(nameEmail);
        }
        
        return ret;
    }
};