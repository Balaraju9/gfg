//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    bool ans=false;
    void fun(vector<int> arr,int t,int i,int s){
        if(s==t){
            ans=true;
            return;
        }
        
        if(i==arr.size() || ans==true ||s>t ){
            return;
        }
        fun(arr,t,i+1,s+arr[i]);
        fun(arr,t,i+1,s);
        
        
    }
    bool isSubsetSum(vector<int>& arr, int t) {
        fun(arr,t,0,0);
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
        int sum;
        cin >> sum;
        cin.ignore();

        Solution ob;
        if (ob.isSubsetSum(arr, sum))
            cout << "true" << endl;
        else
            cout << "false" << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends