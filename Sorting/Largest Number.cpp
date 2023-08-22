bool check(int a,int b){
        return to_string(a)+to_string(b)>to_string(b)+to_string(a);
    }
class Solution {
public:
    string largestNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end(),check);
        string res="";
        for(int i=0;i<nums.size();i++)
        {
            res+=to_string(nums[i]);
        }
        if(res[0]=='0') return "0";
        return res;
    }
};
