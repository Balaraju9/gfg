//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {

  public:
    int minCoins(vector<int> &c, int sum) {
        sort(c.begin(),c.end());
        vector<vector<int>> v1(c.size()+1,vector<int>(sum+1,9999));
        
        int j=0;
           for (int i = 0; i <= c.size(); i++) {
        v1[i][0] = 0;
    }
        for(int i=1;i<v1.size();i++){
            for( j=1;j<=sum;j++){
                if(c[i-1]>j){
                    v1[i][j]=v1[i-1][j];
                }
                else {
                
                    v1[i][j] = min(v1[i - 1][j], v1[i][j - c[i - 1]] + 1);
               
            }
                
                
               
        }
        }
        
    
        return v1[c.size()][sum]==9999?-1:v1[c.size()][sum];
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        int res = obj.minCoins(arr, k);
        cout << res << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends