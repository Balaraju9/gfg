//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        int s=0,c=0;
        unordered_map<int,int> mp;
        int max1=0;
        
        for(int i=0;i<arr.size();i++){
            s=s+arr[i];
            if(mp.find(s-k)!=mp.end()){
                max1=max(max1,(i-mp[s-k]));
            }
            if(s-k==0){
             max1=max(max1,i+1);   
            }
            if(mp.find(s)==mp.end()){
            mp[s]=i;
            }
            
        }
        return max1;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore newline character after t

    while (t--) {
        vector<int> arr;
        int k;
        string inputLine;

        getline(cin, inputLine); // Read the array input as a line
        stringstream ss(inputLine);
        int value;
        while (ss >> value) {
            arr.push_back(value);
        }

        cin >> k;
        cin.ignore(); // Ignore newline character after k input

        Solution solution;
        cout << solution.longestSubarray(arr, k) << "\n";
        cout << "~\n";
    }

    return 0;
}

// } Driver Code Ends