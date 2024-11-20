//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to find the majority elements in the array
    vector<int> findMajority(vector<int>& arr) {
       unordered_map<int,int> mp;
       for(int i=0;i<arr.size();i++){
           mp[arr[i]]++;
       }
       int k=arr.size()/3;
      vector<int> v1;
      for(int i=0;i<arr.size();i++){
          if(mp[arr[i]]>k ){
              v1.push_back(arr[i]);
              mp[arr[i]]=-1;
              
          }
      }
      sort(v1.begin(),v1.end());
      return v1;
       
        
        
        
    }
       
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        string s;
        getline(cin, s);
        stringstream ss(s);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        Solution ob;
        vector<int> ans = ob.findMajority(nums);
        if (ans.empty()) {
            cout << "[]";
        } else {
            for (auto &i : ans)
                cout << i << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends