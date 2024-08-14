//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int longestCommonSubstr(string str1, string str2) {
        int k1=str1.size();
        int k2=str2.size();
        int max1=0;
        vector<vector<int> >v1(k1+1,vector<int>(k2+1,0));
        for(int i=v1.size()-2;i>=0;i--){
            for(int j=v1[i].size()-2;j>=0;j--){
                if(str1[i]==str2[j]){
                    v1[i][j]=1+v1[i+1][j+1];
                    max1=max(max1,v1[i][j]);
                }
                else{
                    v1[i][j]=0;
                }
            }
        }
        return max1;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s1, s2;
        cin >> s1 >> s2;
        Solution ob;

        cout << ob.longestCommonSubstr(s1, s2) << endl;
    }
}
// } Driver Code Ends