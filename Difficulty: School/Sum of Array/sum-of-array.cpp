//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    // Function to return sum of elements
   int fun(const vector<int>& v1, long long i, int acc) {
    if (i == v1.size()) {
        return acc;
    }
    return fun(v1, i + 1, acc + v1[i]);
}

int sum(vector<int>& arr) {
    return fun(arr, 0, 0);
}

};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);

    while (t--) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        Solution ob;
        int ans = ob.sum(nums); // Pass the vector nums to the sum function
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends