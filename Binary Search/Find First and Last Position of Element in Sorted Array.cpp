class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
       int low=0;
       int high=nums.size()-1;
    //    int mid=(low+high)/2;

       vector<int>v;
       v.push_back(-1);
       v.push_back(-1);

       while(low<=high){
           int mid=(low+high)/2;
           if(nums[mid]==target){
               v[0]=mid;
               high=mid-1;
           }
           else if(nums[mid]<target){
                low=mid+1;
           }
           else{
               high=mid-1;
           }
       }
       low=0;
       high=nums.size()-1;
       while(low<=high){
           int mid=(low+high)/2;
           if(nums[mid]==target){
               v[1]=mid;
               low=mid+1;
           }
           else if(nums[mid]<target){
                low=mid+1;
           }
           else{
               high=mid-1;
           }
       }
      return v;

    }
};
