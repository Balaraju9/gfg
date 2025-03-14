//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int count(vector<int>& c, int s) {
        vector<vector<int>> v1(c.size()+1,vector<int>(s+1,0));
        for(int i=1;i<v1.size();i++){
            for(int j=1;j<v1[0].size();j++){
                if(j>c[i-1]){
                    int pu=v1[i][j-c[i-1]]+v1[i-1][j];
                    v1[i][j]=pu;
                }
                else if(j==c[i-1]){
                     int pu=1+v1[i-1][j];
                    v1[i][j]=pu;
                }
                else{
                    v1[i][j]=v1[i-1][j];
                    
                }
                
            }
        }
        return v1[c.size()][s];
        
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
        int sum;
        cin >> sum;
        cin.ignore();
        Solution ob;
        cout << ob.count(arr, sum) << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends