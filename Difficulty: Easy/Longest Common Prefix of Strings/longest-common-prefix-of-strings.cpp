//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
  string fun(string s1,string s2){
      string s3="";
      int i=0,j=0;
      while(i<s1.size() && j<s2.size()){
          if(s1[i]==s2[j]){
              s3+=s1[i];
              i++;
              j++;
          }
          else{
              return s3;
          }
      }
      return s3;
  }

    string longestCommonPrefix(vector<string> ar) {
        string s1=ar[0];
        for(int i=1;i<ar.size();i++){
            s1=fun(s1,ar[i]);
            if(s1.size()<1){
                return "-1";
            }
        }
        return s1;
        // your code here
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<string> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        string number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        cout << ob.longestCommonPrefix(arr) << endl;
    }
}

// } Driver Code Ends