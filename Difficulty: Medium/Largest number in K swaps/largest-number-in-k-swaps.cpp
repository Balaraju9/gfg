//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends



class Solution {
  public:
    // Function to find the largest number after k swaps.
    string findMaximumNum(string& s, int k) {
      string s2=s;
      sort(s2.begin(),s2.end(),[](char &i,char &j){
          int k1=i-'0';
          int k2=j-'0';
          return k1>k2;
      });
      
      for(int i=0;i<s.size();i++){
          if(s[i]==s2[i]){
              
          }
          else{
              for(int j1=s.size()-1;j1>=i+1;j1--){
                  if(s[j1]==s2[i] && k>0){
                      swap(s[i],s[j1]);
                      k--;
                      break;
                  }
              }
          }
      }
      return s;
    }
};


//{ Driver Code Starts.

int main() {
    int t, k;
    string str;

    cin >> t;
    while (t--) {
        cin >> k >> str;
        Solution ob;
        cout << ob.findMaximumNum(str, k) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends