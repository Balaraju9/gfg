//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  void fun(vector<int> &v1,int k){
      queue<int> q1;
      vector<int> v2;
      for(auto &i:v1){
          q1.push(i);
      }
      while(k--){
          int pu=q1.front();
          q1.pop();
          q1.push(pu);
          
      }
      while(!q1.empty()){
          v2.push_back(q1.front());
          q1.pop();
      }
      v1=v2;
      v2.clear();
     
      
      
      
  }
    vector<vector<int>> rotateMatrix(int k, vector<vector<int>> mat) {
        
        for(auto &i:mat){
            fun(i,k);
        }
        return mat;
        // code here
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        vector<vector<int>> mat(n, vector<int>(m));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> mat[i][j];
        Solution ob;
        vector<vector<int>> ans = ob.rotateMatrix(k, mat);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++)
                cout << ans[i][j] << " ";
            cout << "\n";
        }
    }
}

// } Driver Code Ends