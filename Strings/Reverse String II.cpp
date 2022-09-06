class Solution {
public:
    string reverseStr(string s, int k) {
        int start=0;
        int end=min(k,(int)s.length());
        while(start<s.length())
        {
           reverse(s.begin()+start,s.begin()+end);
            start=start+2*k;
            end=min(k+start,(int)s.length());
        }
        return s;
    }
};
