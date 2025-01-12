//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int maxWater(vector<int> &arr) {
        vector<int> lg(arr.size());
         vector<int> rg(arr.size());
        stack<int> st;
        int max1=-1;
        for(int i=arr.size()-1;i>=0;i--){
          if(arr[i]>=max1){
              lg[i]=0;
          }
          else{
              lg[i]=max1;
          }
          max1=max(max1,arr[i]);
        }
         max1=-1;
        for(int i=0;i<arr.size();i++){
          if(arr[i]>=max1){
              rg[i]=0;
          }
          else{
              rg[i]=max1;
          }
          max1=max(max1,arr[i]);
        }
        vector<int> ans(arr.size());
       for(int i=0;i<arr.size();i++){
           int min1=min(lg[i],rg[i]);
           if(arr[i]>min1){
               ans[i]=0;
           }
           else{
               ans[i]=min1-arr[i];
           }
           
       }
       int s=0;
       for(auto &i:ans){
          s+=i;
       }
        return s;
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

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        int res = ob.maxWater(arr);

        cout << res << endl << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends