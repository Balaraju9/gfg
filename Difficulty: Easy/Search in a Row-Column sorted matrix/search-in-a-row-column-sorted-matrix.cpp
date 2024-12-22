//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    bool fun(vector<int> v1,int k){
        int l=0,h=v1.size()-1;
        while(l<=h){
            int m=(l+h)/2;
            if(v1[m]==k){
                return true;
            }
            else if(v1[m]>k){
                h=m-1;
            }
            else{
                l=m+1;
            }
        }
        return false;
    }
    bool matSearch(vector<vector<int>> &mat, int x) {
       for(int i=0;i<mat.size();i++){
           if(mat[i][0]<=x && mat[i][mat[i].size()-1]>=x){
               if(x==mat[i][0]){
                   return true;
               }
               else if(x==mat[i][mat.size()-1]){
                   return true;
               }
               if(fun(mat[i],x)){
                   return true;
               }
           }
       }
       return false;
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
        int x;
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                cin >> matrix[i][j];
            }
        }
        cin >> x;
        Solution ob;
        bool an = ob.matSearch(matrix, x);
        if (an)
            cout << "true" << endl;
        else
            cout << "false" << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends