//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

/*You are required to complete this function*/

class Solution {
  public:
    int maxLen(vector<int>& arr) {
        unordered_map<int,int> mp;
        int i=0,max1=0,s=0;
        while(i<arr.size()){
            s+=arr[i];
            if(s==0){
                 max1=max(max1,i+1);
                
            }
            if(mp.find(s)!=mp.end()){
                max1=max(max1,i-mp[s]);
            }
            else{
                mp[s]=i;
            }
            i++;
        }
        return max1;
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // to ignore the newline after the integer input
    while (t--) {
        int n;
        vector<int> a;
        string input;

        // Input format: first number n followed by the array elements
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);

        Solution obj;
        cout << obj.maxLen(a) << endl;
        cout << "~\n";
    }

    return 0;
}

// } Driver Code Ends