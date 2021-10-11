class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        int n = trips.size();
        vector<pair<int,int>> timeStamps;
        for(int i = 0;i<n;i++){
            timeStamps.push_back({trips[i][1],trips[i][0]});
            timeStamps.push_back({trips[i][2],-trips[i][0]});
        }
        sort(timeStamps.begin(), timeStamps.end());
        int currentCapacity = 0;
        for(auto time : timeStamps){
            currentCapacity += time.second;
            if(currentCapacity > capacity) return false;
        }
        return true;
    }
};