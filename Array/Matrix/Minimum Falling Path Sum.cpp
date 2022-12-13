class Solution {
public:
    int dp[101][101];
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        for(int a=0;a<m;a++) // storing first row in dp grid as it is
        {
            dp[0][a]=matrix[0][a];
        }
        for(int i=1;i<n;i++)  // traversing the matrix
        {
            for(int j=0;j<m;j++)
            {
                int minval=10000;
                if(i-1>=0)                                      // checking whether
                   minval=min(minval,dp[i-1][j]);               // the upper,right upper 
                if(i-1>=0 && j-1>=0)                            // and left upper element exist 
                   minval=min(minval,dp[i-1][j-1]);             // and updating the dp grid with
                if(i-1>=0 && j+1<m)                             // most min value
                   minval=min(minval,dp[i-1][j+1]);

                dp[i][j]=minval+matrix[i][j];       //dont miss to add the original matrix value also
            }
        }
        int ans=dp[n-1][0];            // previously store only first element of last row
        for(int x=1;x<m;x++)
        {
            ans=min(ans,dp[n-1][x]);    //then check min value from entire last row 
        }
        return ans;
    }
};
