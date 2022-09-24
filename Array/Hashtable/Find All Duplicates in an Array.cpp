class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>ans;
        unordered_map<int,int>mp;
        int n=nums.size();
        for(auto i:nums)
        { 
           mp[i]++;
        }
        int m=mp.size();
        int j=0;
         for(auto &it:mp)
        {
            if(it.second==2)
            {
                ans.push_back(it.first);
            }
           
        }
        return ans;
    }
};
