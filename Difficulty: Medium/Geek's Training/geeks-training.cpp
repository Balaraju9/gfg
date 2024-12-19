//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  
    int maximumPoints(vector<vector<int>>& arr, int n) {
        
        for(int i=arr.size()-2;i>=0;i--){
            vector<int> v1=arr[i+1];
            sort(v1.begin(),v1.end());
            int max1=0;
            for(int j=3;j>=0;j--){
                int max1=v1[v1.size()-1];
                if(arr[i+1][j]==max1){
                    max1=v1[v1.size()-2];
                }
                arr[i][j]=max1+arr[i][j];
                
            }
        }
        int max1=0;
        for(int i=0;i<arr.size();i++){
            for(int j=0;j<3;j++){
                max1=max(max1,arr[i][j]);
                
                
                
            }
            if(i==1){
                break;
            }
        }
        return max1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> arr;
        for (int i = 0; i < n; ++i) {
            vector<int> temp;
            for (int j = 0; j < 3; ++j) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            arr.push_back(temp);
        }

        Solution obj;
        cout << obj.maximumPoints(arr, n) << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends