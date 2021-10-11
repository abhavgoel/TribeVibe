class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int gasTank = 0, gasShortage = 0, start = 0;
        int n = gas.size();
        for(int i = 0; i < n; i++){
            gasTank += gas[i] - cost[i];
            
            if(gasTank < 0){
                start = i + 1;
                gasShortage += gasTank;
                gasTank = 0;
            }
        } 
        if(gasTank + gasShortage >= 0)
            return start;
        
        return -1;       
    }
};