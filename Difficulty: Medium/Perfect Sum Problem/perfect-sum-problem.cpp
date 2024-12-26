//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int perfectSum(vector<int>& arr, int t) {
        int n=arr.size();
        int sum=t;
          long dp[n+1][sum+1], i, j, mod=1000000007;
        
        for(i=1; i<=sum; i++)
        {
            dp[0][i]=0;
        }
        for(i=0; i<=n; i++){
            dp[i][0]=1;
        }
        
        for(i=1; i<=n; i++)
        {
            for(j=0; j<=sum; j++)
            {
                if(arr[i-1]<=j){
                    dp[i][j]=(dp[i-1][j]+dp[i-1][j-arr[i-1]])%mod;
                }else{
                    dp[i][j]=dp[i-1][j];
                }
                
            }
        }
        
        return dp[n][sum];
        // code here
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore newline character after t

    while (t--) {
        vector<int> arr;
        int target;
        string inputLine;

        getline(cin, inputLine); // Read the array input as a line
        stringstream ss(inputLine);
        int value;
        while (ss >> value) {
            arr.push_back(value);
        }

        cin >> target;
        cin.ignore(); // Ignore newline character after target input

        Solution solution;
        cout << solution.perfectSum(arr, target);
        cout << "\n~\n";
    }

    return 0;
}

// } Driver Code Ends