class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n=rooms.size();
        vector<int>visited(n,false);
        queue<int>q;
        q.push(0);
        visited[0]=1;

        while(!q.empty())
        {
            int room=q.front();
            q.pop();

            for(auto key:rooms[room])
            {
                if(!visited[key])
                {
                    q.push(key);
                    visited[key]=true;
                }
            }
        }
        for(auto x:visited)
        {
            if(x==false)
               return x;
        }
        return true;
    }
};
