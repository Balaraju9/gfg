//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    void fun(int st,vector<vector<int>> v1,vector<bool> &vis){
        vis[st]=true;
        for(auto &i:v1[st]){
            if(vis[i]==false){
                fun(i,v1,vis);
            }
        }
        
    }
    int numProvinces(vector<vector<int>> adj, int v) {
        vector<vector<int>> v1(v);
        for(int i=0;i<adj.size();i++){
            for(int j=0;j<adj.size();j++){
                if(adj[i][j]==1){
                v1[i].push_back(j);
                }
            }
        }
        int c=0;
        vector<bool> vis(v1.size(),false);
        for(int i=0;i<v1.size();i++){
            if(vis[i]==false){
                c++;
                fun(i,v1,vis);
            }
        }
        return c;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int V,x;
        cin>>V;
        
        vector<vector<int>> adj;
        
        for(int i=0; i<V; i++)
        {
            vector<int> temp;
            for(int j=0; j<V; j++)
            {
                cin>>x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }
        

        Solution ob;
        cout << ob.numProvinces(adj,V) << endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends