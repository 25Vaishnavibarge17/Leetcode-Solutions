class Solution {
public:
    bool canJump(vector<int>& nums) {
        int indx=nums.size()-1;
        for(int i=indx;i>=0;i--)
        {
            if(nums[i]+i>=indx)
            {
                indx=i;
            }
        }
        if(indx==0)
            return true;
        else
            return false;
    }
};
