class Solution {
  public:
    vector<vector<int>> applyDiff2D(vector<vector<int>>& mat,
                                    vector<vector<int>>& opr) {
        vector<vector<int>> temp(mat.size(),vector<int>(mat[0].size(),0));
                                        
       for(int i=0;i<opr.size();i++){
           vector<int> v1=opr[i];
           int val=v1[0];
           int r1=v1[1];
           int c1=v1[2];
           int r2=v1[3];
           int c2=v1[4];
           for(int  k=r1;k<=r2;k++){
               temp[k][c1]+=val;
                if(c2+1<temp[k].size()){
           temp[k][c2+1]+=-val;
           }
               
           }
        //   temp[r1][c1]+=val;
        //   if(c2+1<temp[r1].size()){
        //   temp[r1][c2+1]+=-val;
        //   }
        //      temp[r2][c1]+=val;
        //   if(c2+1<temp[r2].size()){
        //   temp[r2][c2+1]+=-val;
        //   }
           
       }
        for(int i=0;i<temp.size();i++){
         int s=0;
         for(int j=0;j<temp[i].size();j++){
             s+=temp[i][j];
             temp[i][j]=s;
             
         }
     }
       for(int i=0;i<temp.size();i++){
         
         for(int j=0;j<temp[i].size();j++){
            mat[i][j]+=temp[i][j];
             
         }
     }
       return mat;
        
    }
};