class Solution {
public:
    bool isSubsequence(string s, string t) {
	    int count = 0;
	    int i = 0, j = 0;
	    while (i < s.length() && j < t.length()){
		    if (s[i] == t[j]) {
			    i++;
			    count++;
		    }
		    j++;
	    }
	    return count == s.length();
    }
};