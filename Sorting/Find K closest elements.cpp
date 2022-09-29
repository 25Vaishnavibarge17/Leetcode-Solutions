class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n=arr.size();
        vector<pair<int,int>>vp;
        for(int i=0;i<n;i++)
        {
            int a=abs(arr[i]-x);
            vp.push_back({a,arr[i]});
        }
        sort(vp.begin(),vp.end());
        vector<int>ans;
        for(int i=0;i<k;i++)
        {
            ans.push_back(vp[i].second);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};
