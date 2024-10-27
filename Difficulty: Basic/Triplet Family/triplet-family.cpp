//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool findTriplet(vector<int>& arr) {
          sort(arr.begin(), arr.end());
        
        
    for(int i=0;i<arr.size();i++){
        int st1=i+1;
        int end1=arr.size()-1;
        int st0=0;
        int end0=i-1;
         while (st0 < end0) {
            if (arr[st0] + arr[end0] == arr[i]) {
                return true;
            }
            if (arr[st0] + arr[end0] < arr[i]) {
                st0++;
            } else {
                end0--;
            }
        }
        
        // Fix the condition in the second while loop
        while (st1 < end1) {
            if (arr[st1] + arr[end1] == arr[i]) {
                return true;
            }
            if (arr[st1] + arr[end1] < arr[i]) {
                st1++;
            } else {
                end1--;
            }
        }
    }
       return false;
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
        Solution obj;
        bool res = obj.findTriplet(arr);
        if (res)
            cout << "true" << endl;
        else
            cout << "false" << endl;
        // cout << res << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends