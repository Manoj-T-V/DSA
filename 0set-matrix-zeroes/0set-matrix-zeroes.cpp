class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
            set<int> r;
            set<int> c;
            for(int i=0;i<matrix.size();i++){
                    for(int j=0;j<matrix[0].size();j++){
                            if(matrix[i][j] == 0)
                            {
                                r.insert(i);
                                    c.insert(j);
                            }
                    }
            }
            
            for(int i=0;i<matrix.size();i++){
                    for(int j=0;j<matrix[0].size();j++){
                            if(r.count(i)!=0 || c.count(j)!=0)
                            {
                                    cout << "c ";
                                matrix[i][j]=0;
                            }
                    }
            }
            
    }
};