//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:

    bool kPangram(string s, int k) {
       int c=0;
       unordered_map<char,int> mp;
       for(int i=0;i<s.size();i++){
           if(s[i]>='a' && s[i]<='z'){
               c++;
               mp[s[i]]++;
           }
           
       }
  
       if(c>=26 && ((26-mp.size())<=k)){
           return true;
       }
       return false;
       
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin.ignore();
        string str;
        getline(cin, str);

        int k;
        cin >> k;

        Solution ob;
        bool a = ob.kPangram(str, k);
        if (a)
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
    return 0;
}
// } Driver Code Ends