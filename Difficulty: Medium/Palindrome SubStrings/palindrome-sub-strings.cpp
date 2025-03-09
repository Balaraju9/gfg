//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    int countPS(string &s) {
        int c1=0;
        for(int i=0;i<s.size();i++){
            int i1=i;
            int j1=i;
            int c=0;
            while(i1<s.size() && j1>=0  && s[i1]==s[j1]){
                i1++;
                j1--;
                c++;
            }
            int s1=(c+c)-1;
            if(s1>=2){
                c1+=(c-1);
            }
            
        }
            for(int i=0;i<s.size();i++){
            int i1=i+1;
            int j1=i;
            int c=0;
            while(i1<s.size() && j1>=0  && s[i1]==s[j1]){
                i1++;
                j1--;
                c++;
            }
            int s1=(c+c);
            if(s1>=1){
                c1+=c;
                
            }
            
        }
        return c1;
        
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.countPS(s) << endl;
        cout << "~\n";
    }
    return 0;
}
// } Driver Code Ends