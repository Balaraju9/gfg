//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int maxLength(string str) {
        int l=0,r=0,max1=0,max2=0;
        for(int i=0;i<str.size();i++){
            if(str[i]=='('){
                l++;
            }
            else if(str[i]==')'){
                r++;
            }
            if(l==r){
                max1=max(max1,l*2);
            }
            if(r>l){
                r=0;
                l=0;
            }
        }
        l=0,r=0;
                for(int i=str.size()-1;i>=0;i--){
            if(str[i]=='('){
                l++;
            }
            else if(str[i]==')'){
                r++;
            }
            if(l==r){
                max2=max(max2,l*2);
            }
            if(r<l){
                r=0;
                l=0;
            }
        }
        return max(max1,max2);
        // code here
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
        cout << ob.maxLength(S) << "\n";
    }
    return 0;
}
// } Driver Code Ends