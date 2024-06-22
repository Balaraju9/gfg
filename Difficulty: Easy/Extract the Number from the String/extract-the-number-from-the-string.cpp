//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    long long ExtractNumber(string s) {
        vector<string> v1;
        string s1;
        long long max1=-1;
        long long pu=0;
        
        for(int i=0;i<s.size();i++){
            while(s[i]!=' ' && i<s.size()){
                s1+=s[i];
                i++; 
            }
            v1.push_back(s1);
            s1="";
        }
        for(int i=0;i<v1.size();i++){
            
            if(isdigit(v1[i][0]) && v1[i].find("9")==string::npos){
                 pu=stoll(v1[i]);
                max1=max(max1,pu);
                
               
                
            }
        }
        return max1;

        // code here
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
        cout << ob.ExtractNumber(s) << "\n";
    }

    return 0;
}

// } Driver Code Ends