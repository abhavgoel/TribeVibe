class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int n = bills.size();
        map<int,int> mp;
        for(auto i : bills){
            if(i == 5) mp[5]++;
            else if(i == 10){
                if(mp[5] > 0){
                    mp[5]--;mp[10]++;
                } 
                else return false; 
            }
            else{
                if(mp[10] > 0 && mp[5] > 0){
                    mp[10]--;mp[5]--;mp[20]++;
                }
                else if(mp[5]>=3){
                    mp[5]-=3;mp[20]++;
                }
                else return false;
            }
        }
        return true;
    }
};