//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
    int longestPalinSubseq(string &s) {
        vector<vector<int>> v1(s.size()+1,vector<int>(s.size()+1,0));
        for(int i=1;i<v1.size();i++){
            for(int j=1;j<v1[i].size();j++){
                char c=s[i-1];
                char c1=s[s.size()-j];
                if(c==c1){
                    v1[i][j]=1+v1[i-1][j-1];
                }
                else{
                    v1[i][j]=max(v1[i][j-1],v1[i-1][j]);
                }
              
                
            }
        }
      
        return v1[s.size()][s.size()];
    }
};


//{ Driver Code Starts.

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.longestPalinSubseq(s) << endl;

        cout << "~"
             << "\n";
    }
}

// } Driver Code Ends