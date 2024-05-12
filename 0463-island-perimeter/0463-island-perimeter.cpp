class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int row = grid.size();
        int column = grid[0].size();
        int up,down,right,left,ans=0;
        for(int r =0;r<row;r++){
            for(int c=0;c<column;c++){
                if(grid[r][c]==1){
                    if(r==0) up=1;
                    else up=grid[r-1][c] == 0;

                    if(r==row-1) down=1;
                    else down = grid[r+1][c]==0;

                    if(c==0) left =1;
                    else left = grid[r][c-1]==0;

                    if(c==column-1) right=1;
                    else right=grid[r][c+1]==0;

                    ans += up+right+left+down;

                }
            }
        }
    return ans;
    }
};