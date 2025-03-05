//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int fun(unordered_map<string,int> &mp,string s1){
        int max1=0;
        for(int i=0;i<s1.size();i++){
            string pu=s1.substr(0,i)+s1.substr(i+1,s1.size());
            if(mp.find(pu) != mp.end()) {
                max1=max(max1,mp[pu]);
            }
        }
        return max1;
    }
    int longestStringChain(vector<string>& w) {
        sort(w.begin(),w.end(),[](auto &i,auto &j){
            return i.size()<j.size();
        });
        int max2=0;
        unordered_map<string,int> mp;
        for(int i=0;i<w.size();i++){
            int k=fun(mp,w[i]);
            mp[w[i]]=1+k;
            max2=max(max2,1+k);
            
            
        }
        return max2;
        
        
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<string> words;
        string input;
        getline(cin, input);
        stringstream ss(input);
        string number;
        while (ss >> number) {
            words.push_back(number);
        }
        Solution obj;
        cout << obj.longestStringChain(words) << "\n";
        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends