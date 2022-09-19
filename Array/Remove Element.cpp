class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int>::iterator itr;
        itr=nums.begin();
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==val)
            {
                nums.erase(itr);
                itr--;
                i--;
            }
            itr++;
        }
        return nums.size();   
    }
};
