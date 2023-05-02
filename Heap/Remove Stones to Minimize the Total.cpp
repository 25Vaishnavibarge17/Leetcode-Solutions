class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int>pq;
        for(auto i:piles)
        {
            pq.push(i);
        }
        while(k--)
        {
            int x=pq.top();
            pq.pop();
            pq.push(x-floor(x/2));
        }
        int tot=0;
        while(!pq.empty())
        {
            tot+=pq.top();
            pq.pop();
        }
       return tot;
    }
};
