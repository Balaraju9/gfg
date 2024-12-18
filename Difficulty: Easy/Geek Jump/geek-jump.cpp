//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int minimumEnergy(vector<int>& h, int n) {
        if(n==1) return 0;
        vector<int> v1(n);
        v1[n-1]=0;
        v1[n-2]=abs(h[n-1]-h[n-2]);
        for(int i=h.size()-1;i>=0;i--){
            if(i==h.size()-1 || i==h.size()-2){
                
            }
            else{
                int k=abs(h[i]-h[i+1])+v1[i+1];
                int k1=abs(h[i]-h[i+2])+v1[i+2];
                v1[i]=min(k,k1);
            }
        }
        return v1[0];
       
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.minimumEnergy(arr, N) << "\n";
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends