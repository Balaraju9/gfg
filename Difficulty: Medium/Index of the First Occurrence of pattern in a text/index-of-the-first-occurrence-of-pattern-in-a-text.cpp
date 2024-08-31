//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int findMatching(string text, string pat) {
        int i=0,j=0;
        for( i=0;i<text.size();i++){
            if(text[i]==pat[j]){
                int pu=i;
                while(i<text.size() && j<pat.size() && text[i]==pat[j]){
                    i++;
                    j++;
                    
                }
                if(j==pat.size()){
                    return i-pat.size();
                }
                else{
                    i=pu;
                    j=0;
                }
                
            }
        }
        return -1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string text, pat;
        cin >> text >> pat;
        Solution obj;
        cout << obj.findMatching(text, pat) << endl;
    }
    return 0;
}
// } Driver Code Ends