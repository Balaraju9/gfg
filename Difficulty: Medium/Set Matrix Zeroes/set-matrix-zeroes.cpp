//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    void setMatrixZeroes(vector<vector<int>> &mat) {
        unordered_map<int,int> mprow;
        unordered_map<int,int>mpcol;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[i].size();j++){
                
                if(mat[i][j]==0){
                    mprow[i]++;
                    mpcol[j]++;
                }
                
            }
        }
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[i].size();j++){
                if(mprow[i]>=1){
                    mat[i][j]=0;
                }
                else if(mpcol[j]>=1){
                    mat[i][j]=0;
                }
            }
        }
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int> > arr(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> arr[i][j];
            }
        }
        Solution ob;
        ob.setMatrixZeroes(arr);
        for (auto x : arr) {
            for (auto y : x)
                cout << y << " ";
            cout << endl;
        }

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends