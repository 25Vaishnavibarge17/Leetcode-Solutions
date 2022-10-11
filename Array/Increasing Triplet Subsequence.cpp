class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n=nums.size();
        if(n<3){
         return false;
        }
        int first=INT_MAX;
        int second=INT_MAX;
        for(auto &i:nums)
        {
           if(i<=first)
           {
              first=i;
           }
            else if(i<=second)
            {
                second=i;
            }
            else
            {
               return true;
            }
        }
        return false;
    }
};
