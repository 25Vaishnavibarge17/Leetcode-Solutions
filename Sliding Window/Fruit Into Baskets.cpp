class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n=fruits.size();
        int i=0,j=0,ans=0;
        unordered_map<int,int>mp;
        while(i<n)
        {
            mp[fruits[i]]++;
            if(mp.size()<=2)
            {
                ans=max(ans,i-j+1);
            }
            else
            {
                mp[fruits[j]]--;
                if(mp[fruits[j]]==0)
                {
                    mp.erase(fruits[j]);
                    
                }
             j++;
            }
            i++;
        }
        return ans;
    }
};
