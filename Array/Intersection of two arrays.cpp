class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int i=0,j=0;
        int a=nums1.size();
        int b=nums2.size();
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        vector<int>ans;
        while(i<a && j<b)
        {
           if(nums1[i]==nums2[j])
           {
               ans.push_back(nums1[i]);
               i++;
               j++;
           }
            else if(nums1[i]>nums2[j])
            {
               j++;
            }
            else
                i++;
            while(i>0 && i<a && nums1[i]==nums1[i-1] )
            {
                i++;
            }
            while(j>0 && j<b && nums2[j]==nums2[j-1] )
            {
                j++;
            }
        }
        return ans;
    }
};
