//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:

    void rearrange(vector<int> &arr) {
    vector<int> v1;
    vector<int> v2;
    for(int i=0;i<arr.size();i++){
        if(arr[i]>=0){
            v1.push_back(arr[i]);
        }
        else{
            v2.push_back(arr[i]);
        }
    }
    int i=0,j=0;

    bool c=true;
    int pu=0;

    while(i<v1.size() && j<v2.size()){
        if(c){
            arr[pu]=v1[i];
            i++;
            c=false;
            
        }
        else{
            arr[pu]=v2[j];
            j++;
            c=true;
        }
            pu++;
    }

        while(i<v1.size()){
        
            arr[pu]=v1[i];
            i++;
            pu++;
        
        
    
            
        
    }
        while( j<v2.size()){
    
            arr[pu]=v2[j];
            j++;
            pu++;
        
    }
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
        int num;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        Solution ob;
        ob.rearrange(arr);
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends