//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    // Function to search a given number in row-column sorted matrix
    bool fun(vector<int> v1,int x){
        int l=0,h=v1.size()-1;
        while(l<=h){
            int m=(l+h)/2;
            if(v1[m]==x){
                return true;
            }
            else if(v1[m]>x){
                h=m-1;
            }
            else
            {
                l=m+1;
            }
        }
        return false;
    }
    bool searchRowMatrix(vector<vector<int>> &mat, int x) {
        for(int i=0;i<mat.size();i++){
            if(mat[i][0]<=x && mat[i][mat[i].size()-1]>=x){
                if(mat[i][0]==x || mat[i][mat[i].size()-1]==x){
                    return true;
                    
                }
                if(fun(mat[i],x)) return true;
            }
        }
        return false;
        // code here
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {

        int n, m;
        cin >> n >> m;
        vector<vector<int> > matrix(n);

        for (int i = 0; i < n; i++) {
            matrix[i].assign(m, 0);
            for (int j = 0; j < m; j++) {
                cin >> matrix[i][j];
            }
        }

        int x;
        cin >> x;
        Solution obj;
        if (obj.searchRowMatrix(matrix, x))
            cout << "true\n";
        else
            cout << "false\n";

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends