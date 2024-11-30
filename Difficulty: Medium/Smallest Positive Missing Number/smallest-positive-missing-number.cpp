//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to find the smallest positive number missing from the array.
    int missingNumber(vector<int> &arr) {
       unordered_map<int,int> mp;
       for(int i=0;i<arr.size();i++){
           mp[arr[i]]++;
       }
       int i1=*max_element(arr.begin(),arr.end());
       if(i1<0){
           return 1;
       }
       for(int i=1;i<=i1;i++){
           if(mp[i]>=1){
             
               
           }
           else{
               return i;
           }
       }
       return i1+1;
       
    }
};

//{ Driver Code Starts.

// int missingNumber(int arr[], int n);

int main() {

    // taking testcases
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

        Solution ob;
        int result = ob.missingNumber(arr);
        cout << result << "\n";
    }
    return 0;
}
// } Driver Code Ends