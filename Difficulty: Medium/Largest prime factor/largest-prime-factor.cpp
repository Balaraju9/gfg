//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int largestPrimeFactor(int n) {
        vector<int> v1;
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0){
                v1.push_back(i);
                while(n%i==0){
                    n=n/i;
                }
            }
            if(n!=1){
                v1.push_back(n);
            }
        }
       
        return v1[v1.size()-1];
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.largestPrimeFactor(N) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends