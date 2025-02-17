//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> kLargest(vector<int>& arr, int k) {
       priority_queue<int,vector<int>,greater<int>> q;
       for(auto &i:arr){
           q.push(i);
           if(q.size()>k){
               q.pop();
           }
       }
       vector<int> v1;
       
       while(!q.empty()){
          
           v1.push_back(q.top());
           q.pop();
       }
       reverse(v1.begin(),v1.end());
       return v1;
       
    }
};

//{ Driver Code Starts.
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution ob;
        vector<int> ans = ob.kLargest(arr, k);
        for (auto it : ans) {
            cout << it << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends