//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
    long long n = arr.size();
    long long sumN = (n * (n + 1)) / 2;
    long long sumSqN = (n * (n + 1) * (2 * n + 1)) / 6;
    
    long long sumArr = 0, sumSqArr = 0;
    for (long long num : arr) {
        sumArr += num;
        sumSqArr += (long long)num * num;
    }
    
    long long diff1 = sumArr - sumN;
    long long diff2 = sumSqArr - sumSqN;
    
    long long sumAB = diff2 / diff1;
    
    long long repeating = (diff1 + sumAB) / 2;
    long long missing = sumAB - repeating;
    
    return {repeating, missing};
}

};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        int num;
        vector<int> arr;
        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        Solution ob;
        auto ans = ob.findTwoElement(arr);
        cout << ans[0] << " " << ans[1] << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends