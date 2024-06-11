//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string oddEven(string s) {
        int x=0,y=0;
        vector<char> v1;
        for(char i='a';i<='z';i++){
            v1.push_back(i);
        }
        unordered_map<char,int> mp;
        for(auto &i:s){
            mp[i]++;
        }
        for(int i=0;i<v1.size();i++){
            if(mp.find(v1[i])!=mp.end()){
                if((i+1)%2==0 && mp[v1[i]]%2==0){
                    x++;
                }
                else if((i+1)%2!=0 && mp[v1[i]]%2!=0){
                    y++;
                }
            }
        }
        if((x+y)%2==0){
            return "EVEN";
        }
        return "ODD";
        
        
        
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        string s;
        getline(cin, s);

        Solution obj;
        string res = obj.oddEven(s);

        cout << res << "\n";
    }
}

// } Driver Code Ends