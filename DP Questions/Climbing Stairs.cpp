class Solution {
public:
    int climbStairs(int n) {
        if(n==1) return 1;
        vector<int> dpvec(n+1);
        dpvec[0]=0,dpvec[1]=1,dpvec[2]=2;
        for(int i=3;i<=n;i++)
            dpvec[i]=dpvec[i-1]+dpvec[i-2];
        
        return dpvec[n];
    }
};
