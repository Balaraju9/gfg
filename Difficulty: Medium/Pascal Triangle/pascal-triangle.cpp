//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    vector<int> nthRowOfPascalTriangle(int n) {
        if(n==1){
            return {1};
        }
        if(n==2){
            return {1,1};
        }
        vector<int> v1;
        v1.push_back(1);
        v1.push_back(1);
        n=n-2;
        while(n>0){
            int pu=v1.size();
            vector<int> v2;
            v2.push_back(1);
            for(int i=1;i<pu;i++){
                v2.push_back(v1[i]+v1[i-1]);
                
                
            }
            v2.push_back(1);
            v1=v2;
            v2.clear();
            n--;
        }
        return v1;
        
        
    }
};



//{ Driver Code Starts.

void printAns(vector<int> &ans) {
    for (auto &x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.nthRowOfPascalTriangle(n);
        printAns(ans);

        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends