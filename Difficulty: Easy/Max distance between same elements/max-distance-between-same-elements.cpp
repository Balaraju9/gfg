//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  
    int maxDistance(vector<int> &arr) {
        unordered_map<int,int> mp1;
        unordered_map<int,int> mp;
        for(int i=0;i<arr.size();i++){
            if(mp.find(arr[i])==mp.end()){
                mp[arr[i]]=i;
            }
        }
        for(int i=arr.size()-1;i>=0;i--){
            if(mp1.find(arr[i])==mp1.end()){
                mp1[arr[i]]=i;
            }
        }
        int max1=INT_MIN;
        for(auto &i:mp){
            max1=max(max1,abs(mp1[i.first]-mp[i.first]));
            
        }
        return max1;
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

        stringstream s1(input);
        int num;
        while (s1 >> num) {
            arr.push_back(num);
        }

        Solution ob;
        cout << ob.maxDistance(arr) << endl;
    }
    return 0;
}
// } Driver Code Ends