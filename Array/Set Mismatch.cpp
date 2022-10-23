class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int>v;
        unordered_set<int>s;
        int sum=0;
        for(auto x:nums)
        {
           if(s.find(x)!=s.end())
           {
               v.push_back(x);
           }
           else
           {
             s.insert(x);
               sum=sum+x;
           }
        }
        int n=nums.size();
        int tot_sum=(n*(n+1))/2;
        int miss_num=tot_sum-sum;
        v.push_back(miss_num);
        return v;
    }
};
