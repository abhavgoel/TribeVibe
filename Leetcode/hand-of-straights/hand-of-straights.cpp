class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        sort(hand.begin(), hand.end());
        unordered_map<int,int> freq;
        for(int i = 0;i < hand.size();i++) freq[hand[i]]++;
        for(int i = 0;i < hand.size();i++){
            if(freq[hand[i]] <= 0) continue;
            if(freq[hand[i]] > 0){
                int cur = hand[i];
                for(int j = cur;j < cur + groupSize;j++){
                    if(freq[j] == 0) return false;
                    freq[j]--;
                }
            }
        }
        return true;
    }
};