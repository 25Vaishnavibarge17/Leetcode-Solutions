class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int>output(n+1,0);
        
        
        int ans=-1;

        for(int i=0;i<trust.size();i++)
        {
            output[trust[i][0]]--;
            output[trust[i][1]]++;
        }
        for(int i=0;i<=n;i++)
        {
            if(output[i]==n-1)
            {
                ans=i;
            }
        }
    return ans;

    }
};
