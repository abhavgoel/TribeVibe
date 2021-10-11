class Solution {
public:
    string breakPalindrome(string s) {
        int n = s.size();
        if(n <= 1) return "";
        for(int i = 0;i<n/2;i++){
            if(s[i] > 'a'){
                s[i] = 'a';
                return s;
            }
        }
        for(int i = n-1;i>=0;i--){
            if(s[i] < 'z'){
                s[i]++;
                return s;
            }
        }
        return "";
    }
};