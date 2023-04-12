class Solution {
public:
        void transpose(vector<vector<int>>& matrix, int r , int c)
        {
                for(int i=0;i<r;i++)
                {
                        for(int j=i;j<c;j++)
                        {
                                swap(matrix[i][j],matrix[j][i]);
                        }
                }
        }
        
        void rowReverse(vector<vector<int>>& matrix, int r , int c){
             for(int i=0;i<r;i++)
                {
                       reverse(matrix[i].begin(),matrix[i].end());
                }   
        }
        
    void rotate(vector<vector<int>>& matrix) {
            int rows = matrix.size();
            int columns = matrix[0].size();
            transpose(matrix,rows,columns);
            rowReverse(matrix,rows,columns);
    }
};