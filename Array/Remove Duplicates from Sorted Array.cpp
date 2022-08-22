class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int>removed_dup;
        vector<int>:: iterator itr;
        for(itr=nums.begin();itr!=nums.end();itr++)
        {
            int ele=*itr;
            if(find(removed_dup.begin(),removed_dup.end(),ele) != removed_dup.end())
            {
                nums.erase(itr);
                itr--;
            }
            else
            {
                removed_dup.push_back(*itr);
            }
        }
        return nums.size();
    }
};
