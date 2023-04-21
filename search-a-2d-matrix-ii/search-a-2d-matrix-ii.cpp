class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
            int row = matrix.size();
            int col = matrix[0].size();
            int rowindex = 0;
            int columnindex = col-1;
           // int mid = start + (end - start)/2;
           
            while(rowindex < row && columnindex >=0 )
            {
               int element = matrix[rowindex][columnindex];
                    if(element == target){
                        return true;
                    }
                    else if(element > target){
                     columnindex--;
                    }
                    else{
                       rowindex++;
                    }
                   
            }
            return false;
        
    }
};