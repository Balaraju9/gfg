//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int minimizeCost(int k, vector<int>& arr) {
        if(arr.size()==1) return 0;
        vector<int> v1(arr.size());
        v1[arr.size()-1]=0;
        
        v1[arr.size()-2]=abs(arr[arr.size()-1]-arr[arr.size()-2]);
        for(int i=arr.size()-3;i>=0;i--){
            int min1=INT_MAX;
            int pu=0;
            for(int j=i+1;j<arr.size();j++){
                
                if(pu>=k){
                    break;
                }
                pu++;
                min1=min(min1,abs(arr[i]-arr[j])+v1[j]);
                
                
            }
            v1[i]=min1;
        }
        return v1[0];
        
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        int res = obj.minimizeCost(k, arr);
        cout << res << endl;
        cout << "~" << endl;
        // string tl;
        // getline(cin, tl);
    }
    return 0;
}

// } Driver Code Ends