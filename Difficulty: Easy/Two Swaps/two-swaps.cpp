//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool checkSorted(vector<int> &arr) {
        int pu=0;
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i]>arr[i+1]){
                pu++;
            }
        }
        if(pu>4){
            return false;
        }
       vector<int> v1=arr;
       sort(v1.begin(),v1.end());
       unordered_map<int,int> mp;
       for(int i=0;i<v1.size();i++){
           mp[v1[i]]=i;
       }
       int z=0;
       for(int i=0;i<arr.size();i++){
           if(mp[arr[i]]!=i && z<2){
               swap(arr[mp[arr[i]]],arr[i]);
               z++;
             
             if(v1==arr && z<2){
                 return false;
             }
               
           }
       }
       return v1==arr;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        vector<int> arr;
        while (ss >> num)
            arr.push_back(num);

        Solution ob;
        bool ans = ob.checkSorted(arr);
        if (ans)
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
}

// } Driver Code Ends