class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n=score.size();
        priority_queue<pair<int,int>>pq;
        vector<string>ans(n,"");
        for(int i=0;i<n;i++)
        {
            pq.push({score[i],i});
        }
        int cnt=1;
        int i=0;
        while(i<n)
        {
            int top=pq.top().second;
            if(cnt==1)
            {
                ans[top]="Gold Medal";
            }
            else if(cnt==2)
            {
                ans[top]="Silver Medal";
            }
            else if(cnt==3)
            {
                ans[top]="Bronze Medal";
            }
            else
            {
                ans[top]=to_string(cnt);
            }
            pq.pop();
            cnt++;
            i++;
        }
       return ans;
    }
};
