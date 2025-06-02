class Solution {
  public:
    int uniquePaths(vector<vector<int>> &g) {
        for(int i=0;i<g.size();i++){
            for(int j=0;j<g[i].size();j++){
                if(g[i][j]==1){
                    g[i][j]=-1;
                }
               
                
            }
        }
        for(int i=0;i<g.size();i++){
            if(g[i][0]==-1){
                break;
                
            }
            else{
                g[i][0]=1;
            }
        }
        for(int j=0;j<g[0].size();j++){
            if(g[0][j]==-1){
                break;
            
            }
            else{
                    g[0][j]=1;
            }
        }
        for(int i=1;i<g.size();i++){
            for(int j=1;j<g[i].size();j++){
                if(g[i][j]!=-1){
                    int k1=g[i-1][j];
                    int k2=g[i][j-1];
                    if(k1<0) k1=0;
                    if(k2<0) k2=0;
                    g[i][j]=k1+k2;
                    
                }
            }
        }
        if(g[g.size()-1][g[0].size()-1]==-1) return 0;
        else{
            return g[g.size()-1][g[0].size()-1];
        }
      
        
        
    }
};