//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public: 
    // Function to count the number of possible triangles.
    int countTriangles(vector<int>& arr) {
        sort(arr.begin(),arr.end());
     
        int c=0;
        for(int i=arr.size()-1;i>=2;i--){
            int z=arr[i];
            int j1=i-1;
            int i1=0;
            while(i1<j1){
                if(arr[i1]+arr[j1]>z){
                    c+=(j1-i1);
                    j1--;
                }
                else{
                i1++;
                }                
                
            }
            
        }
        return c;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To ignore the newline after the integer input
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
        cout << obj.countTriangles(a) << "\n~\n";
    }

    return 0;
}

// } Driver Code Ends