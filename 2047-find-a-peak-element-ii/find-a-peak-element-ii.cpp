class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int i=0;
        int j=0;

        while(i<mat.size() && j<mat[0].size())
        {
            if(i>0 && mat[i-1][j]>mat[i][j])
            {
                i=i-1;
            }
            else if(j>0 && mat[i][j-1]>mat[i][j])
            {
                j=j-1;
            }
            else if(j<mat[0].size() -1 && mat[i][j+1]>mat[i][j])
            {
                j=j+1;
            }  
            else if(i<mat.size() -1 && mat[i+1][j]>mat[i][j])
            {
                i=i+1;
            }  
            else
            {
                return {i,j};
            }                            
        }
        return {};
    }
};