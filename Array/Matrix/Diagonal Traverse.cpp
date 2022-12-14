class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        map<int,vector<int>>mp;
        int row=mat.size();
        int col=mat[0].size();
        for(int i=0;i<row;i++)
        {
           for(int j=0;j<col;j++)
           {
               int sum=i+j;
               mp[sum].push_back(mat[i][j]);
           }
        }
        vector<int>ans;
        for(auto &x:mp)
        {
           if(x.first%2==0)
           {
               for(int i=x.second.size()-1;i>=0;i--)
               {
                   ans.push_back(x.second[i]);
               }
           }
            else
            { 
                for(int i=0;i<x.second.size();i++)
               {
                   ans.push_back(x.second[i]);
               }

            }
        }
        return ans;
    }
};
