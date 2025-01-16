//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> ans;
    void fun(int st,vector<bool> &visited,vector<vector<int>> adj){
        visited[st]=true;
        ans.push_back(st);
        for(auto &i:adj[st]){
            if(visited[i]==false){
                fun(i,visited,adj);
            }
        }
    }
    vector<int> dfsOfGraph(vector<vector<int>>& adj) {
        vector<bool> v(adj.size(),false);
        int st=0;
        
        fun(st,v,adj);
        return ans;
        
    }
};

//{ Driver Code Starts.

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;

        vector<vector<int>> adj(
            V); // Use vector of vectors instead of array of vectors.

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        Solution obj;
        vector<int> ans = obj.dfsOfGraph(adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends