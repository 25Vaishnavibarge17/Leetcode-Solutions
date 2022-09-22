class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
       string ans;
        int count=0;
        unordered_map<string,int>mp;
        int i=0;
        while(i<paragraph.size())
        {
          string ans="";
          while(i<paragraph.size() && isalpha(paragraph[i]))
             {
                ans+=tolower(paragraph[i]);
                i++;
            
             }
            if(ans!="")
              {
                 mp[ans]++;
                
               }
                i++;
        }
        
          for(auto &s: banned)
          {
             mp.erase(s);
          }
          for(auto &[key,value]:mp)
          {
              if(count<value)
              {
                  ans=key;
                  count=value;
              }
          }
        
        return ans;
    }
};
