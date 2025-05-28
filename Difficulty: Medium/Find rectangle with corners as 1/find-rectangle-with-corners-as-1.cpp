class Solution {
  public:
    bool ValidCorner(vector<vector<int> >& mat) {
        int c;
        for(int j=0;j<mat[0].size();j++){
            
            for(int k=j+1;k<mat[0].size();k++){
                c=0;
                for(int i=0;i<mat.size();i++){
                    if(mat[i][j]==1 && mat[i][j]==mat[i][k]){
                        c++;
                    }
                    if(c>=2) return true;
                }
                
            }
        }
        return false;
        
    }
};