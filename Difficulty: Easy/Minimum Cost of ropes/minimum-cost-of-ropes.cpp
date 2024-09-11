//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to return the minimum cost of connecting the ropes.
    long long minCost(vector<long long>& arr) {
        priority_queue <long long, vector<long long>, greater<long long> > pq; 
        for(auto &i:arr){
            pq.push(i);
        }
        long long  z=0,s=0;
        while(pq.size()>1){
            int k=pq.top();
            pq.pop();
            int k1=pq.top();
            pq.pop();
            s=s+(k+k1);
            pq.push(s);
            z=z+s;
            s=0;
        }
        return z;
    }
};


//{ Driver Code Starts.

int main() {
    long long t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        long long num;
        vector<long long> a;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            a.push_back(num);
        }
        Solution ob;
        cout << ob.minCost(a) << endl;
    }
    return 0;
}

// } Driver Code Ends