class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
         string morsecode[]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    
    unordered_map<string,int> mp;
    for(int i=0;i<words.size();i++)
    {
      string ans="";
      for(int j=0;j<words[i].size();j++)
      {
        ans+=morsecode[words[i][j]-'a'];
      }
        mp[ans]++;
       
    }
         return mp.size();
        
    }
    
};
