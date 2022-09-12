class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(),tokens.end());
        int score=0;
        int max_scr=0;
        int i=0,j=tokens.size()-1;
        while(i<=j)
        {
            if(tokens[i]<=power)
            {
               score=score+1;
               if(max_scr<score){
                   max_scr=score;
               }
               power=power-tokens[i];
               i++;
            }
            else if(score>0)
            {
               score=score-1;
               power=power+tokens[j];
               j--;
            }
            else
            {
               break;
            }
        }
        return max_scr;
    }
};
