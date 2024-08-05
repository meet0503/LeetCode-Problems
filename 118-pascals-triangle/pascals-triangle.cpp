class Solution {
public:
    vector<int> generateRow(int row){
        vector<int> ansTEMP;
        long long ans = 1;
        ansTEMP.push_back(ans); // first element will always be one

        for(int col = 1; col<row; col++){
            ans = ans*(row-col);
            ans = ans/col;
            ansTEMP.push_back(ans);
        }

        return ansTEMP;
    }

    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int row = 1; row<= numRows; row++){
            ans.push_back(generateRow(row));
        }

        return ans;
    }
};