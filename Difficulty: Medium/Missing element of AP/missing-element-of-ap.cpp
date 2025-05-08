//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++

class Solution {
  public:
    int findMissing(vector<int> &arr) {
        int min1=INT_MAX;
        for(int i=1;i<=arr.size()/2;i++){
            min1=min(min1,arr[i]-arr[i-1]);
        }
        int j=0;
        for(int i=arr[0];i<=arr[arr.size()-1];i=i+min1){
            if(i!=arr[j]){
                return i;
            }
            
            j++;
            if(j>=arr.size()){
                break;
            }
        }
        return arr[arr.size()-1]+min1;
        
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;

        getline(cin, input);

        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        cout << ob.findMissing(arr) << "\n";
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends