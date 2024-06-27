//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

bool isToepliz(vector<vector<int>> &mat);

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> a(n, vector<int>(m, 0));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++)
                cin >> a[i][j];
        }

        bool b = isToepliz(a);

        if (b == true)
            cout << "true";
        else
            cout << "false";

        cout << endl;
    }
    return 0;
}
// } Driver Code Ends



bool isToepliz(vector<vector<int>>& m) {
    // code here
    for(int i=0;i<m.size();i++){
        for(int j=0;j<m[i].size();j++){
            int k=i+1;
            int k1=j+1;
            if(k<=m.size()-1 && k1<=m[i].size()-1){
                if(m[i][j]!=m[k][k1]){
                    return false;
                }
                
            }
        }
    }
    return true;
}