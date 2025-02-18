//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<vector<int>> kClosest(vector<vector<int>>& p, int k) {
       priority_queue<pair<int,int>> q;
       for(int i=0;i<p.size();i++){
           int a=p[i][0];
           int a1=p[i][1];
           a=a*a;
            a1=a1*a1;
           int tot=a+a1;
          
           q.push({tot,i});
           if(q.size()>k){
               q.pop();
           }
           
       }
       vector<vector<int>> v1;
       while(!q.empty()){
        
           
        
       v1.push_back(p[q.top().second]);
           
           q.pop();
       }

       return v1;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int k;
        cin >> k;
        int n;
        cin >> n;
        vector<vector<int>> points(n, vector<int>(2));
        for (int i = 0; i < n; i++) {
            cin >> points[i][0] >> points[i][1];
        }
        Solution ob;
        vector<vector<int>> ans = ob.kClosest(points, k);
        sort(ans.begin(), ans.end());
        for (const vector<int>& point : ans) {
            cout << point[0] << " " << point[1] << endl;
        }
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends