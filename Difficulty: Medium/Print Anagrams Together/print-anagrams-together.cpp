//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<vector<string>> anagrams(vector<string>& arr) {
        unordered_map<string,vector<string>> mp;
        vector<string> v1(arr.size());
        for(int i=0;i<arr.size();i++){
            string s1=arr[i];
            sort(s1.begin(),s1.end());
            v1[i]=s1;
            
            
            
        }
        for(int i=0;i<v1.size();i++){
            mp[v1[i]].push_back(arr[i]);
        }
        vector<vector<string>> ans;
        for(auto &i:mp){
            ans.push_back(i.second);
        }
        sort(ans.begin(),ans.end());
        return ans;
        
        
        
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        vector<string> arr;
        string input_line;
        getline(cin, input_line);
        stringstream ss(input_line);
        string word;
        while (ss >> word) {
            arr.push_back(word);
        }

        Solution ob;
        vector<vector<string> > result = ob.anagrams(arr);
        sort(result.begin(), result.end());
        for (int i = 0; i < result.size(); i++) {
            for (int j = 0; j < result[i].size(); j++) {
                cout << result[i][j] << " ";
            }
            cout << "\n";
        }

        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends