class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue <int>pq;
        for(auto i: stones) pq.push(i);
        while(pq.size() > 1){
            int one = pq.top(); pq.pop();
            int two = pq.top(); pq.pop();
            if(one != two) pq.push(one-two);   
        }
        return pq.empty()? 0: pq.top();
    }
};