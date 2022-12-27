class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        vector<int>v;
        long sum=0;
        int n=capacity.size();
        for(int i=0;i<n;i++)
        {
            int x=capacity[i]-rocks[i];
            v.push_back(x);
            sum+=x;
        }
        if(sum<=additionalRocks)
            return n;
        sort(v.begin(),v.end());
        int i,cnt=0;
        while(additionalRocks>=0)
        {
            if(v[i]<=additionalRocks)
            {
               additionalRocks-=v[i];
               cnt++;
               i++;
            }
            else
               break;
            if(i==v.size()-1)
               break;   
        }
        return cnt;
    }
};
