class Solution {
public:
    int earliestFullBloom(vector<int>& plantTime, vector<int>& growTime) {
        int n = plantTime.size();
        vector<pair<int, int>> plant(n);        
        
        for(int i=0; i<n; i++) {
			// store growTime[i] & plantTime[i] in pair
            plant[i] = {growTime[i], plantTime[i]};
        }
        
		// sort the vector in non-increasing order 
		// to get grow time of plants in descending order
        sort(plant.rbegin(), plant.rend());
        
        int curr_day = 0;
        int ans = 0;
        
        for(int i=0; i<n; i++) {
			// update value of day when planting
            curr_day += plant[i].second;
			// update ans with max of current day + grow time
            ans = max(ans, curr_day+plant[i].first);
        }
        
        return ans;
    }
};
