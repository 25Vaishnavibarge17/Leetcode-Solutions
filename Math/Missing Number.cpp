class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int exsum=0;
        for(int i=0;i<n;i++)
        {
           exsum+=nums[i];
        }
       int calsum=(n*(n+1))/2;
       return calsum-exsum;
    }
};
