class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int l=0;
        int r=0;
        int sum=0;
        int minlen=INT_MAX;
        while(r<n)
        {
            sum+=nums[r];
            while(sum>=target)
            {
                sum-=nums[l];
                minlen=min(r-l+1,minlen);
                l++;
            }
            r++;
        }
        if(minlen==INT_MAX)
        {
            return 0;
        }

        return minlen;
    }
};
