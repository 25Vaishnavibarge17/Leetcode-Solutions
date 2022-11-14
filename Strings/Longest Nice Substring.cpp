class Solution {
public:
    string longestNiceSubstring(string s) {
        if(s.size()<2)
            return "";
        unordered_set<char>st;
        for(int i=0;i<s.size();i++)
        {
            st.insert(s[i]);
        }
        for(int i=0;i<s.size();i++)
        {
           if(st.count(toupper(s[i]))==true && st.count(tolower(s[i]))==true)
               continue;
            string bef=longestNiceSubstring(s.substr(0,i));
            string after=longestNiceSubstring(s.substr(i+1));
            if(bef.size()>=after.size())
                return bef;
            else
                return after;
        }
        return s;
    }
};
