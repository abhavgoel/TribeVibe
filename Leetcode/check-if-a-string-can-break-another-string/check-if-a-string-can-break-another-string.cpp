class Solution {
public:
    bool checkIfCanBreak(string s1, string s2) {
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        int i = 0;
        while(i<s1.size() && s1[i] >= s2[i]) i++;
        if(i == s1.size()) return true;
        i = 0;
        while(i<s1.size() && s2[i] >= s1[i]) i++;
        return i == s1.size();
    }
};