//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> spirallyTraverse(vector<vector<int> > &mat) {
        vector<int> v1;
      int top=0,bottom=mat.size()-1,left=0,right=mat[0].size()-1,dir=0;
      while(top<=bottom && left<=right){
          if(dir==0){
              for(int i=left;i<=right;i++){
                  v1.push_back(mat[top][i]);
                  
                  
              }
              top++;
              
              
          }
          else if(dir==1){
              for(int i=top;i<=bottom;i++){
                  v1.push_back(mat[i][right]);
              }
              right--;
              
          }
          else if(dir==2){
              for(int i=right;i>=left;i--){
                  v1.push_back(mat[bottom][i]);
              }
              bottom--;
              
          }
          else{
              for(int i=bottom;i>=top;i--){
                  v1.push_back(mat[i][left]);
              }
              left++;
              
          }
          dir=(dir+1)%4;
      }
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
        vector<vector<int>> matrix(r);

        for (int i = 0; i < r; i++) {
            matrix[i].assign(c, 0);
            for (int j = 0; j < c; j++) {
                cin >> matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix);
        for (int i = 0; i < result.size(); ++i)
            cout << result[i] << " ";
        cout << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends