//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int isValid(string s) {
        string pu;
        int z=0;
        for(int i=0;i<s.size();i++){
            while(s[i]!='.' && i<s.size()){
                pu=pu+s[i];
                i++;
            }
            if(s[i]=='.'){
                z++;
                  if(pu.size()==0){
            return false;
        }
        if(pu.size()>1 && pu[0]=='0'){
            return false;
        }
                
                int k=stoi(pu);
                if(k>=0 && k<=255){
                    pu="";
                    continue;
                }
                else{
                    return false;
                }
            }
        }
        if(pu.size()==0){
            return false;
        }
          if(pu.size()>1 && pu[0]=='0'){
            return false;
        }
        
        int k=stoi(pu);
         if(k>=0 && k<=255 && z==3){
                    return true;
                }
                
                    return false;
                
    }
    
};

//{ Driver Code Starts.

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        // if (s.size() == 3) {
        //     cout << "false" << endl;
        //     return 0;
        // }
        Solution ob;
        bool f = ob.isValid(s);
        if (f)
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
    return 0;
}
// } Driver Code Ends