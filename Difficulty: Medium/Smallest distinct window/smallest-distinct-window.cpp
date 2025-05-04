//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int findSubString(string& str) {
        int k=0;
        
       unordered_map<char,int> mp;
        unordered_map<char,int> mp1;
       for(auto &i:str){
           mp[i]++;
       }
       int k1=mp.size();
       int i=0,j=0,min1=INT_MAX;
       while(j<str.size()){
           mp1[str[j]]++;
           while(mp1.size()==k1){
               min1=min(min1,(j-i)+1);
               mp1[str[i]]--;
               if (mp1[str[i]] == 0) {
    mp1.erase(str[i]);
}

               i++;
           }
           j++;
       }
       return min1;
    }
};


//{ Driver Code Starts.
//      Driver code
int main() {
    int t;
    cin >> t;
    while (t--) {

        string str;
        cin >> str;
        Solution ob;
        cout << ob.findSubString(str) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends