//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
    
  public:
    int countPairs(vector<int> &arr, int t) {
       sort(arr.begin(),arr.end());
       int j=arr.size()-1;
       while(j>=0 && arr[j]>=t){
           j--;
       }
       int c=0;
       for(int i=j;i>0;i--){
           int pu=i-1;
           while(pu>=0 && arr[i]+arr[pu]>=t){
               pu--;
           }
           c=c+(pu+1);
           
           
       }
       return c;
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
        int target;
        cin >> target;
        cin.ignore();
        Solution ob;
        int res = ob.countPairs(arr, target);
        cout << res << endl;
        cout << "~\n";
    }
    return 0;
}
// } Driver Code Ends