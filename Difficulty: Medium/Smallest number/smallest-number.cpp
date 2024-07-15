//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string smallestNumber(int s, int d) {
        string te1=to_string(s);
        int abu=s;
        
        if(te1.size()>d){
            return "-1";
        }
        vector<int> v1;
        while(d--){
            v1.push_back(0);
        }
        int j=v1.size()-1;
        while(s>0 && j>=0){
            if(s>=9){
                v1[j]=9;
                s=s-9;
                
                
            }
            else{
                v1[j]=s;
                s=0;
                
            }
            j--;
            
        }
        if(s>0){
            return "-1";
        }
        if(v1[0]==0){
            for(int i=1;i<v1.size();i++){
                if(v1[i]>1){
                    v1[i]--;
                    v1[0]=1;
                    break;
                }
                else if(v1[i]==1){
                    v1[i]=0;
                    v1[0]=1;
                    break;
                }
            
        }
        }
        int ba=0;
        string s1="";
        for(auto &o:v1){
            ba+=o;
            s1+=to_string(o);
           
           
            
        }

      
        return s1;
        
        
        // code here
    }
};

//{ Driver Code Starts.

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int s, d;
        cin >> s >> d;
        Solution ob;
        cout << ob.smallestNumber(s, d) << "\n";
    }

    return 0;
}
// } Driver Code Ends