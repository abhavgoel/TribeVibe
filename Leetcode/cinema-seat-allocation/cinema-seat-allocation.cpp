class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reserved) {
        int ans = 0;
        unordered_map<int,vector<int>> mp;
        for(auto r: reserved){
            mp[r[0]].push_back(r[1]);
        }
        
        ans = (n-mp.size())*2 ;  //n-mp.size() --> rows with no reserved seats 
                                 //Each row can have maximum 2 groups 
        
        //2 groups can be formed only when we split it as [2,5] and [6,9] 
    
        for(auto r : mp){
            bool flag = 0;
            vector<bool> contains(11 , 0);
            for(int x : r.second) {
                contains[x] = 1;
            }
            //2 , 3 , 4 , 5 
            if(!contains[2] && !contains[3] && !contains[4] && !contains[5])  {
                ans++;
                flag = 1;
            }
            //6 , 7 , 8 , 9
            if(!contains[6] && !contains[7] && !contains[8] && !contains[9]) {
                ans++;
                flag = 1;
            }
            //4 , 5 , 6 , 7
            if(!flag) {
                if(!contains[4] && !contains[5] && !contains[6] && !contains[7])   
                    ans++;
            }            
        }
        
        return ans; 
    }
};