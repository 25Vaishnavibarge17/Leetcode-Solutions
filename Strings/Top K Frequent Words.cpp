bool comp(pair<string,int>&p1,pair<string,int>&p2)
    {
        if(p1.second==p2.second)
        {
            return p1.first<p2.first;
        }
        else 
            return p1.second>p2.second;
    }
class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int>m;
        for(int i=0;i<words.size();i++)
        {
            m[words[i]]++;
        }
        vector<pair<string,int>>vec;
        for(auto it:m)
        {
          vec.push_back(make_pair(it.first,it.second));
        }
        sort(vec.begin(),vec.end(),comp);
        vector<string>ans;
        for(int i=0;i<k;i++)
        {
            ans.push_back(vec[i].first);
        }
        
        return ans;
    }
};

/*Algo:
1) create map
2)store words[i] in map
3)create vector ' v ' inside create one pair
4)push in v ,pair from m
5) sort vector v using comp function
    comp function:
       pass two pairs p1 and p2
    if p1.second==p2.second
        return p1.first<p2.first
   else
        p1.sec>p2.second
6)create vector ans and push values from vec to ans till k */

