//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    bool isSubsetSum(vector<int>& arr, int t) {
        vector<vector<int>> v1(arr.size(),vector<int>(t+1,0));
           
        
        for(int i=0;i<v1.size();i++){
            for(int j=0;j<v1[i].size();j++){
                if(i==0){
                    if(j==0 || arr[i]==j){
                        v1[i][j]=1;
                    }
                    
                }
                else{
                   
                     if(j==0 || arr[i]==j){
                        v1[i][j]=1;
                    }
                    else if(j>arr[i] && v1[i-1][j-arr[i]]==1){
                        v1[i][j]=1;
                    }
                    else if(v1[i-1][j]==1){
                        v1[i][j]=1;
                    }
                   
                    
                }
            }
        }
        return v1[arr.size()-1][t]==1?true:false;
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
        if (ob.isSubsetSum(arr, sum))
            cout << "true" << endl;
        else
            cout << "false" << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends