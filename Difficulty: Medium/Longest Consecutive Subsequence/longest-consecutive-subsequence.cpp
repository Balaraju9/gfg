//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:

    // Function to return length of longest subsequence of consecutive integers.
    int longestConsecutive(vector<int>& arr) {
        int max1=-1;
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++){
            int j=i+1;
            int c=0;
            while(j<arr.size() && (arr[j-1]==arr[j]-1 || arr[j-1]==arr[j])){
                if( arr[j-1]==arr[j]){
                     
                 
                c++;
               
                 }
                j++;
                
            }
            
                max1=max(max1,(j-i)-c);
                c=0;
              
        }
        return max1;
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

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        int res = ob.longestConsecutive(arr);

        cout << res << endl << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends