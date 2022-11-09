class Solution {
public:
    string tictactoe(vector<vector<int>>& moves) {
        char grid[3][3]={};
        for(int i=0;i<moves.size();i++)
        {
            int row=moves[i][0];
            int col=moves[i][1];
            if(i%2==0)
            {
                grid[row][col]='X';
            }
            else
            {
               grid[row][col]='0'; 
            }
        }
        //checking winner conditions
        for(int i=0;i<3;i++)
        {
            //1)For row
        if(grid[i][0]==grid[i][1] && grid[i][1]==grid[i][2])
        {
            if(grid[i][0]=='X')
                return "A";
            if(grid[i][0]=='0')
                return "B";
        }
        //2)For Col
        if(grid[0][i]==grid[1][i] && grid[1][i]==grid[2][i])
        {
           if(grid[0][i]=='X')
                return "A";
           if(grid[0][i]=='0')
                return "B";
        }
        //3)For Diagonal1
        if(grid[0][0]==grid[1][1] && grid[1][1]==grid[2][2])
        {
           if(grid[0][0]=='X')
                return "A";
           if(grid[0][0]=='0')
                return "B";
        }
        //4)For Diagonal2
         if(grid[0][2]==grid[1][1] && grid[1][1]==grid[2][0])
        {
           if(grid[1][1]=='X')
                return "A";
           if(grid[1][1]=='0')
                return "B";
        }
        }
        if(moves.size()==9)
            return "Draw";
        else
        {
            return "Pending";
        }
    }
};
