//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


// User function Template for C++
class Solution {
  public:
    string smallestNumber(int s, int d) {
        string s1="";
        while(d>0){
            s1+='0';
            d--;
        }
        for(int i=s1.size()-1;i>=0;i--){
            for(int i1=9;i1>=1;i1--){
                if(s>=i1 && s!=0){
                    s1[i]=i1+'0';
                    s=s-i1;
                    break;
                    
                }
            }
            
        }
 
        if(s>0) return "-1";
        if(s1[0]!='0') return s1;
        int i1=0;
        while(i1<s1.size() && s1[i1]=='0'){
            i1++;
        }
        if(s1[i1]=='1'){
            swap(s1[0],s1[i1]);
            return s1;
        }
        s1[0]='1';
        s1[i1]=((s1[i1]-'0')-1)+'0';
        return s1;
        
        
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