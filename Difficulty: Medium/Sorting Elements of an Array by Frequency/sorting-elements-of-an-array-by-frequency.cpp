//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Complete this function
    // Function to sort the array according to frequency of elements.
    vector<int> sortByFreq(vector<int>& arr) {
      map<int,vector<int>> mp;
       unordered_map<int,int> mp1;
       vector<int> v3;
       for(auto &i:arr){
           mp1[i]++;
           
       }
       vector<vector<int>> v2;
       for(auto &i:mp1){
           int k=i.second;
           while(i.second>0){
               mp[k].push_back(i.first);
               i.second--;
           }
       }
       map<int,vector<int>>::reverse_iterator it;
       for(it=mp.rbegin();it!=mp.rend();it++){
           sort(it->second.begin(),it->second.end());
           v2.push_back(it->second);
       }
       
      for(auto &i:v2){
          for(auto &j:i){
              v3.push_back(j);
          }
      }
      
       return v3;
     
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        string input;
        int num;
        vector<int> arr;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        Solution obj;
        vector<int> v;
        v = obj.sortByFreq(arr);
        for (int i : v)
            cout << i << " ";
        cout << endl;
    }

    return 0;
}

// } Driver Code Ends