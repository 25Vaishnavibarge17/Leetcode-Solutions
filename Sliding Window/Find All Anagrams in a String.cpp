class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int slen=s.size();
        int plen=p.size();

        if(slen<plen) return{};

        vector<int>pfreq(26,0);
        vector<int>window(26,0);

        for(int i=0;i<plen;i++){
            pfreq[p[i]-'a']++;
            window[s[i]-'a']++;
        }
        
        vector<int> ans;
        if(pfreq == window) ans.push_back(0);
        
        for(int i=plen;i<slen;i++){
            window[s[i-plen] - 'a']--;
            window[s[i] - 'a']++;
            
            if(pfreq == window) ans.push_back(i-plen+1);
        }
        return ans;


    }
};
