//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    void reverseInGroups(vector<int> &ar, int k) {
        int i=0;
        for(int j=0;j<ar.size();j++){
            if((j-i)+1==k){
                int i1=j+1;
                int j1=j;
                while(i<=j1){
                    swap(ar[i],ar[j1]);
                    i++;
                    j1--;
                    
                }
                i=i1;
            }
        }
    
        if(i<ar.size()-1){
            int j1=ar.size()-1;
            while(i<=j1){
                 swap(ar[i],ar[j1]);
                    i++;
                    j1--;
            }
        }
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int k;
        cin >> k;
        vector<int> arr;
        string input;
        cin.ignore();
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        ob.reverseInGroups(arr, k);
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends