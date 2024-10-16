//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int pairWithMaxSum(vector<int>& arr) {
        if(arr.size()<2){
            return -1;
        }
        vector<int> v1(arr.size());
        stack<int> st;
        vector<int> v2(arr.size());
        for(int i=0;i<arr.size();i++){
            while(!st.empty() && arr[i]<st.top()){
                st.pop();
            }
            if(st.empty()){
                v1[i]=0;
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
                v2[i]=0;
            }
            else{
                v2[i]=st.top();
            }
            st.push(arr[i]);
        }
        int max1=-1;
       for(int i=0;i<arr.size();i++){
           max1=max(max1,arr[i]+max(v1[i],v2[i]));
       }
        return max1;
    }
};

//{ Driver Code Starts.

int main() {
    int tc;
    cin >> tc;
    cin.ignore();

    while (tc--) {
        string input;
        getline(cin, input);

        stringstream ss(input);
        vector<int> a;
        int number;
        while (ss >> number) {
            a.push_back(number);
        }

        Solution obj;
        int res = obj.pairWithMaxSum(a);
        cout << res << endl;
    }
}
// } Driver Code Ends