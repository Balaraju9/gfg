//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int minRepeats(string& s1, string& s2) {
        int k=1;
        unordered_map<char,int> mp;
        unordered_map<char,int> mp1;
        for(auto &i:s1){
            mp[i]++;
        }
        for(auto &i:s2){
            mp1[i]++;
        }
        for(auto &i:mp1){
            if(mp.find(i.first)==mp.end()){
                return -1;
            }
        }
        string z1=s1;
        while(s1.find(s2)==string::npos){
            if(s1.size()>=s2.size()*2){
                return -1;
            }
           
           
            s1+=z1;
            k++;
            
        }
        return k;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {
        string A, B;
        getline(cin, A);
        getline(cin, B);

        Solution ob;
        cout << ob.minRepeats(A, B) << endl;
    }
    return 0;
}
// } Driver Code Ends