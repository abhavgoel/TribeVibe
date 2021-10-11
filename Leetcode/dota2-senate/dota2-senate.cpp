class Solution {
public:
    string predictPartyVictory(string senate) {
        if(senate.size() == 1)
        return senate[0] == 'R' ? "Radiant" : "Dire";
    
        queue<char> q1;
        queue<char> q2;
        for(auto i : senate) q1.push(i);
    
        while(!q1.empty()) {
            if(q2.empty() || q1.front() == q2.front())
                q2.push(q1.front()), q1.pop();
            else
                q1.pop(), q1.push(q2.front()), q2.pop();
        }
        return q2.front() == 'R' ? "Radiant" : "Dire";
    }
};