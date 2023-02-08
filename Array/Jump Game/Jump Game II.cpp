class Solution {
public:
    int jump(vector<int>& nums) {
    int jump = 0;
    int end = 0;
    int farthest = 0;

   
    for (int i = 0; i < nums.size() - 1; ++i) {
      farthest = max(farthest, i + nums[i]);
      if (farthest >= nums.size() - 1) {
        ++jump;
        break;
      }
      if (i == end) {    
        ++jump;           
        end = farthest;  
      }
    }

    return jump;
    }
};
