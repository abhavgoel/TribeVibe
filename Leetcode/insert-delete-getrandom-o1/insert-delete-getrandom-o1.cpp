class RandomizedSet {
    vector<int> v;
    unordered_map<int,int> mymap;
public:
    /** Initialize your data structure here. */
    RandomizedSet() {
    }
    
    /** Inserts a value to the set. Returns true if the set did not already contain the specified element. */
    bool insert(int val) {
        if(mymap.find(val)!=mymap.end())
            return false;
        
        v.push_back(val);
        mymap[val] = v.size()-1;
        return true;
    }
    
    /** Removes a value from the set. Returns true if the set contained the specified element. */
    bool remove(int val) {
        
        if(mymap.find(val)==mymap.end())
            return false;
        
        auto it = mymap.find(val);
        v[it->second] = v.back();
        v.pop_back();
        mymap[v[it->second]] = it->second;
        mymap.erase(val);
        return true;
    }
    
    /** Get a random element from the set. */
    int getRandom() {
        return v[rand()%v.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */