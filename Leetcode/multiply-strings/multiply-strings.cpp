class Solution {
public:
    string multiply(string num1, string num2) {
        if(num1 == "0" or num2=="0") return "0";
        
        vector<int> v(num1.size()+num2.size(),0);
        
        for(int i=num1.size()-1;i>=0;i--)
        {
            for(int j=num2.size()-1;j>=0;j--)
            {
                v[i+j+1] += (num1[i]-'0') * (num2[j]-'0');
                v[i+j] += v[i+j+1]/10;
                v[i+j+1] %= 10;
            }
        }
        
        int i=0,n=num1.size()+num2.size();
        while(i<n && v[i]==0) i++;
        
        string ans;
        while(i<n) ans += v[i++]+'0';
        
        return ans;
    }
};