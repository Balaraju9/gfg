//{ Driver Code Starts


#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    int findCoverage(vector<vector<int>>& m) {
        // Code here
        int c1=0;
        for(int i=0;i<m.size();i++){
            for(int j=0;j<m[i].size();j++){
                int a=i-1;
                int b=i+1;
                int c=j-1;
                int d=j+1;
                if(a<=m.size()-1 && a>=0){
                    if(m[i][j]==0 && m[a][j]==1){
                        c1++;
                    }
                   
                }
                if(m[i][j]==0 &&b<=m.size()-1 && b>=0){
                   
                    if(m[b][j]==1){
                        c1++;
                    }
                    
                }
                if(m[i][j]==0 &&c<=m[i].size()-1 && c>=0){
                    if(m[i][c]==1){
                        c1++;
                    }
                  
                }
                   if(m[i][j]==0 &&d<=m[i].size()-1 && d>=0){
                  
                    if(m[i][d]==1){
                        c1++;
                    }
                }
                
            }
            
        }
        return c1;
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> matrix(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> matrix[i][j];
        Solution obj;
        int ans = obj.findCoverage(matrix);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends