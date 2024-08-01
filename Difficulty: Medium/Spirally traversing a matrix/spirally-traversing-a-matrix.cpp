//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  void fun(vector<vector<int> > &m, vector<int> &v1,int balu,int i,int j,int pu){
      if(pu==v1.size()){
          return;
      }
      if( balu==1){
          
     if(j>=m[0].size() || m[i][j]==-181){
              j=j-1;
              balu=balu+1;
               fun(m,v1,balu,i+1,j,pu);
              
              
          }
          else{
          v1.push_back(m[i][j]);
          m[i][j]=-181;
          
          fun(m,v1,balu,i,j+1,pu);
          }
      }
      else if(balu==2){
             if(i>=m.size() || m[i][j]==-181){
              i=i-1;
              balu=balu+1;
               fun(m,v1,balu,i,j-1,pu);
              
          }
          else{
          v1.push_back(m[i][j]);
           m[i][j]=-181;
          
          fun(m,v1,balu,i+1,j,pu);
          }
          
      }
      else if(balu==3){
            if(j>=m[0].size() || m[i][j]==-181 ){
                j=j+1;
              balu=balu+1;
              fun(m,v1,balu,i-1,j,pu);
              
              
          }
         
          else{
          v1.push_back(m[i][j]);
           m[i][j]=-181;
          
          fun(m,v1,balu,i,j-1,pu);
          }
          
          
      }
      else if(balu==4){
              if(i>=m.size() || m[i][j]==-181 ){
                  i=i+1;
              balu=1;
               fun(m,v1,balu,i,j+1,pu);
              
              
          }
        
          else{
          v1.push_back(m[i][j]);
           m[i][j]=-181;
          
          fun(m,v1,balu,i-1,j,pu);
          }
      }
  }
    vector<int> spirallyTraverse(vector<vector<int> > &m) {
        int pu=0;
        for(int i=0;i<m.size();i++){
            for(int j=0;j<m[i].size();j++){
                pu++;
            }
        }
        
      vector<int> v1;
      vector<int> balu={1,2,3,4};
      fun(m,v1,1,0,0,pu);
      return v1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int r, c;
        cin >> r >> c;
        vector<vector<int>> matrix(r, vector<int>(c, 0));

        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                cin >> matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix);
        for (int i = 0; i < result.size(); ++i)
            cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends