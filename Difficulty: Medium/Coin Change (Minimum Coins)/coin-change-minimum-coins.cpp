//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int minCoins(vector<int> &c, int s) {
        if(s==0) return 0;
        vector<vector<int>> v1(c.size()+1,vector<int>(s+1,INT_MAX));
        for(int i=1;i<v1.size();i++){
            for(int j=1;j<v1[i].size();j++){
                if(c[i-1]>j){
                    v1[i][j]=v1[i-1][j];
                }
                else if(c[i-1]==j){
                    v1[i][j]=1;
                }
                else{
                    int su=v1[i][j-c[i-1]];
                    if(su==INT_MAX){
                        
                    }
                    else{
                        su++;
                    }
                    int pu=min(su,v1[i-1][j]);
                    if(pu==INT_MAX){
                        v1[i][j]=INT_MAX;
                        
                        
                    }
                    else{
                        v1[i][j]=pu;
                    }
                }
                
            }
        }
        return v1[c.size()][s]==INT_MAX?-1:v1[c.size()][s];
        
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