//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    vector<int> productExceptSelf(vector<int>& arr) {
        vector<int> r1(arr.size());
        vector<int> l1(arr.size());
        r1[arr.size()-1]=1;
        l1[0]=1;
        for(int i=1;i<arr.size();i++){
            l1[i]=l1[i-1]*arr[i-1];
            r1[arr.size()-i-1]=r1[arr.size()-i]*arr[arr.size()-i];
            
            
        }
        vector<int> ans(r1.size());
        for(int i=0;i<arr.size();i++){
            ans[i]=r1[i]*l1[i];
        }
        return ans;
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

        Solution obj;
        vector<int> res = obj.productExceptSelf(arr);

        for (int i = 0; i < res.size(); i++) {
            cout << res[i] << " ";
        }
        cout << endl;
        cout << "~\n";
    }

    return 0;
}

// } Driver Code Ends