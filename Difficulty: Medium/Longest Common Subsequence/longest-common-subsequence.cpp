//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int lcs(string &s1, string &s2) {
        
        // code here
        vector<vector<int>> v1(s2.size()+1,vector<int>(s1.size()+1,0));
        for(int i=1;i<v1.size();i++){
            for(int j=1;j<v1[i].size();j++){
                if(s2[i-1]==s1[j-1]){
                   
                    v1[i][j]=1+v1[i-1][j-1];
                    
                }
                else{
                     int max1=max(v1[i-1][j],v1[i][j-1]);
                    v1[i][j]=max1;
                    
                }
                
            }
        }
        int max2=0;
       return v1[s2.size()][s1.size()];
        return max2;
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s1, s2;
        cin >> s1 >> s2; // Take both the strings as input
        Solution ob;
        cout << ob.lcs(s1, s2) << endl; // Call the lcs function
        cout << "~\n";
    }
    return 0;
}

// } Driver Code Ends