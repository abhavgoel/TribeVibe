class Solution {
public:
     
  int edit(string s,string t,int m,int n){
       if(s==t) return 0;
        
       int dp[m+1][n+1];
       for(int i=0;i<=m;i++){
           for(int j=0;j<=n;j++){
               if(i==0) dp[i][j]=j;
               else if(j==0) dp[i][j]=i;
               else if(s[i-1]==t[j-1]) dp[i][j]=dp[i-1][j-1];
               else{
                   dp[i][j]=1+min(dp[i-1][j],min(dp[i][j-1],dp[i-1][j-1]));
               }
           }
       }
       return dp[m][n];
       
  }
    int minDistance(string s, string t) {
          int m=s.size(),n=t.size();
       return edit(s,t,m,n);
    }
};