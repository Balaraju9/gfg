//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template in C++

class Solution {
  public:
    // Function to return the position of the first repeating element.
    int firstRepeated(vector<int> &arr) {
    unordered_map<int, int> indexMap;
    int minIndex = INT_MAX;

    for (int i = 0; i < arr.size(); i++) {
        if (indexMap.count(arr[i])) {
            minIndex = min(minIndex, indexMap[arr[i]]);
        } else {
            indexMap[arr[i]] = i + 1;
        }
    }
    return (minIndex == INT_MAX) ? -1 : minIndex;
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
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        cout << ob.firstRepeated(arr) << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends