//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    vector<int> sumClosest(vector<int>& arr, int t) {
        sort(arr.begin(),arr.end());
        int i=0,j=arr.size()-1;
        int diff=INT_MAX;
        vector<int> ans1(2,-1);
        while(i<j){
            int tot=arr[i]+arr[j];
            if(abs(tot-t)<diff){
                diff=min(abs(tot-t),diff);
                ans1={arr[i],arr[j]};
            }
            if(tot<t){
                i++;
                
                
            }
            else if(tot>t){
                j--;
            }
            else{
                return ans1;
            }
        }
        if(ans1[0]==-1){
            return {};
        }
        return ans1;
        
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
        int target = stoi(ks);
        Solution ob;
        vector<int> ans = ob.sumClosest(arr, target);
        if (ans.empty()) {
            cout << "[]";
        } else {
            for (auto it : ans) {
                cout << it << " ";
            }
        }
        cout << endl;
        cout << "~\n";
    }

    return 0;
}
// } Driver Code Ends