//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string longestPalindrome(string &s) {
        int max1=0;
        int ans1=0,ans2=0;
        for(int i=0;i<s.size();i++){
            int i1=i;
            int j1=i;
            int c1=0;
            while(i1<s.size() && j1>=0 && s[i1]==s[j1]){
                i1++;
                j1--;
                c1++;
                
                
            }
            if(max1<(c1*c1)-1){
                max1=(c1*c1)-1;
                ans1=i1-1;
                ans2=j1+1;
                
            }
            
            
        }
         for(int i=0;i<s.size();i++){
            int i1=i+1;
            int j1=i;
            int c1=0;
            while(i1<s.size() && j1>=0 && s[i1]==s[j1]){
                i1++;
                j1--;
                c1++;
                
                
            }
              if(max1<(c1*c1)){
                max1=(c1*c1);
                ans1=i1-1;
                ans2=j1+1;
                
            }
            
        }
        string s1="";
       while(ans2<=ans1){
           s1+=s[ans2];
           ans2++;
       }
        return s1;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;

        Solution ob;
        cout << ob.longestPalindrome(S) << endl;

        cout << "~"
             << "\n";
    }
}

// } Driver Code Ends