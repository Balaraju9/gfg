//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    // Function to find pair with maximum sum
    int pairWithMaxSum(vector<int> &arr) {
       stack<int> st;
       vector<int> v1(arr.size());
       vector<int> v2(arr.size());
       for(int i=0;i<arr.size();i++){
           
           
           while(!st.empty() && arr[i]<st.top()){
               st.pop();
           }
           if(st.empty()){
               v1[i]=INT_MAX;
           }
           else{
               v1[i]=st.top();
           }
           st.push(arr[i]);
       }
       while(!st.empty()){
           st.pop();
       }
           for(int i=arr.size()-1;i>=0;i--){
           
           
           while(!st.empty() && arr[i]<st.top()){
               st.pop();
           }
           if(st.empty()){
               v2[i]=INT_MAX;
           }
           else{
               v2[i]=st.top();
           }
           st.push(arr[i]);
       }
       int max1=0;
       for(int i=0;i<arr.size();i++){
           int k1;
           if(v1[i]!=INT_MAX && v2[i]!=INT_MAX){
                k1 =max(v1[i],v2[i]);
           }
           else{
               k1=min(v1[i],v2[i]);
           }
          
           if(k1==INT_MAX){
               
           }
           else{
               max1=max(max1,(k1+arr[i]));
           }
       }
       return max1;
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
        cout << ob.pairWithMaxSum(nums) << endl;
    }
    return 0;
}

// } Driver Code Ends