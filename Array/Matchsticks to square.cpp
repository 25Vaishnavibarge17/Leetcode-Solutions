class Solution {
public:
    
    bool dfs(vector<int> matchsticks, int tgt, vector<int> &sides, int indx){
        
        // base case
        if(indx == matchsticks.size()){
            if(sides[0] == sides[1] && sides[1] == sides[2] && sides[2] == sides[3]){
                return true;
            }
            return false;
        }
        
        for(int i = 0; i < 4; i++){
            if (sides[i] + matchsticks[indx] > tgt){  
                continue;
            }
            int j = i - 1;  
            while (j>=0){
                if(sides[j] == sides[i]){
                    break;
                }
                
                j -= 1;
            }
            
            if(j != -1){
                continue;
            }
            
            
            sides[i] += matchsticks[indx];
            
            if( dfs(matchsticks, tgt, sides, indx+1) ){
                return true;
            }
            sides[i] -= matchsticks[indx];
        }
        
        return false;
    
        
    }
    
    
    bool makesquare(vector<int>& matchsticks) {
        
        if(matchsticks.size() == 0){
            return false;
        }
        
        int sum = 0;
        for(int i = 0; i < matchsticks.size() ; i++){
            sum += matchsticks[i];
        }
        
        int tgt = sum / 4;
        vector<int> sides(4,0);
        sort(matchsticks.begin(), matchsticks.end(), greater<int>()); 
        return dfs(matchsticks, tgt, sides, 0);
        
        
    }
};
