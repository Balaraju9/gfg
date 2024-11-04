//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    vector<vector<int>> findTriplets(vector<int> &arr) {
        vector<int> v1;
        vector<vector<int>> v2;
       for(int i=0;i<arr.size();i++){
           for(int j=i+1;j<arr.size();j++){
               for(int k=j+1;k<arr.size();k++){
                   if(arr[i]+arr[k]+arr[j]==0){
                       v1.push_back(i);
                        v1.push_back(j);
                         v1.push_back(k);
                         v2.push_back(v1);
                         v1.clear();
                       
                   }
               }
           }
       }
       return v2;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;

        vector<vector<int>> res = ob.findTriplets(arr);
        sort(res.begin(), res.end());
        if (res.size() == 0) {
            cout << "[]\n";
        }
        for (int i = 0; i < res.size(); i++) {
            for (int j = 0; j < res[i].size(); j++) {
                cout << res[i][j] << " ";
            }
            cout << endl;
        }
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends