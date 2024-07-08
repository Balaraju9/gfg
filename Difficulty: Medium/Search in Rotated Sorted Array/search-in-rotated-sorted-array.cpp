//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

        class Solution {
public:
    int bin(int l, int h, int k, vector<int>& ar){ // Pass ar by reference
        while(l <= h){ // Change condition to l <= h
            int m = (l + h) / 2;
            if(ar[m] == k){
                return m;
            }
            else if(ar[m] < k){
                l = m + 1;
            }
            else{
                h = m - 1;
            }
        }
        return -1;
    }
    
    int search(vector<int>& ar, int k) {
        int i = 0;
        int pu = -1;
        for(i = 0; i < ar.size() - 1; i++){
            if(ar[i] > ar[i + 1]){
                break;
            }
        }
        
        if(ar[0] <= k && ar[i] >= k){
            pu = bin(0, i, k, ar);
        }
        else{
            pu = bin(i + 1, ar.size() - 1, k, ar);
        }
        return pu;
    }
};

        // complete the function here
    

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        cin.ignore();
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int key;
        cin >> key;
        Solution ob;
        cout << ob.search(arr, key) << endl;
    }
    return 0;
}
// } Driver Code Ends