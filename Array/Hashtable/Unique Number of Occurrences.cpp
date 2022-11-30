class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int> mp;                
        for(auto it : arr)
        {
            mp[it]++;                   
        }
        set<int>s;
        for(auto it :  mp)
        {
            if(s.count(it.second))
                return false;
            
            s.insert(it.second);                   
        }
        return true;    
    }
};
