class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>>res;
        vector<string>onepath;
        helper(s,0,onepath,res);
        return res;
    }

    void helper(string s,int index,vector<string>&onepath,vector<vector<string>>&res)
    {
        if(index==s.size())
        {
           res.push_back(onepath);
           return;
        }
        for(int i=index;i<s.size();++i)
        {
            if(isPalindrome(s,index,i))
            {
               onepath.push_back(s.substr(index,i-index+1));
               helper(s,i+1,onepath,res);
               onepath.pop_back();
            }
        }
    }

    bool isPalindrome(string s,int start,int end)
    {
        while(start<=end)
        {
            if(s[start++]!=s[end--])
              return false;
        }
        return true;
    }
};
