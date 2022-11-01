class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int min=INT_MAX,ans;
        for(int i=0;i<nums.size();i++)
        {
            if(abs(nums[i])<min)
            {
               min=abs(nums[i]);  
               ans=nums[i];
            }
            else if(abs(nums[i])==min)
            {
               ans=max(ans,nums[i]);
            }    
        }
        return ans;
    }
};
