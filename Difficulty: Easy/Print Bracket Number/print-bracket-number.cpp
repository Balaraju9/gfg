//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:

    vector<int> bracketNumbers(string s) {
        vector<int> v1;
        vector<int> v2;
        int c=0;
        for(int i=0;i<s.size();i++){
           if(s[i]=='('){
               c++;
               v1.push_back(c);
               v2.push_back(c);
           }
           else if(s[i]==')'){
               v1.push_back(v2[v2.size()-1]);
               v2.pop_back();
           }
        }
        return v1;
        // Your code goes here
    }
};

//{ Driver Code Starts.

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    string tc;
    getline(cin, tc);
    t = stoi(tc);
    while (t--) {
        string s;
        getline(cin, s);

        Solution ob;

        vector<int> ans = ob.bracketNumbers(s);

        for (auto i : ans)
            cout << i << " ";

        cout << "\n";
    }

    return 0;
}
// } Driver Code Ends