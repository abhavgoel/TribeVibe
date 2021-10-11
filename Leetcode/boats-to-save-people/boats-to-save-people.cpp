class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int n = people.size();
        int i = 0,j = n-1;
        int count = 0;
        while(i<=j){
            if(people[i] + people[j] <= limit){
                count++;i++;j--;
            }
            else{
                count++;j--;
            }
        }
        return count;
    }
};