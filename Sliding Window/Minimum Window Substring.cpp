class Solution {
public:
    string minWindow(string s, string t) {
        if(s.length()==0 || t.length()==0 || s.length()<t.length())
        {
            return "";
        }
        vector<int>v(256,0); // Declared a vector of size 256 bcz there are total 256 ascii characters 
                             //we use this vector to store frequency of characters from given two strings
        for(int i=0;i<t.length();++i)
        {
            v[t[i]]++;
        }
        int start=0,end=0,ans_startind=0;
        int minlength=INT_MAX;
        int cnt=0;
        while(end<s.length())
        {
           if(v[s[end]]>0)
           {
               cnt++;
           }
           v[s[end]]--;  // we rsduce the frequency of each character we have passed through
           while(cnt==(int)t.length()) // when we get the count equal to t string we apply shrinking of window
           {
               if(minlength>end-start+1)
               {
                  minlength=end-start+1;  // we update minlength continuously
                  ans_startind=start; 
               }
               v[s[start]]++;     // window shrinking starts here
               if(v[s[start]]>0)
               {
                   cnt--;
               }
               start++;
           }
            end++;  // window expansion
        }
        if(minlength==INT_MAX)
        {
            return "";
        }
        return s.substr(ans_startind,minlength);
    }
};
