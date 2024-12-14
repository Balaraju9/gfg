//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int search(vector<int>& arr, int key) {
        int i=0,j=arr.size()-1;
        int i1=arr.size()/2;
        int j1=arr.size()/2;
        while(i<=j){
            if(arr[i]==key){
                return i;
            }
            if(arr[j]==key){
                return j;
            }
              if(i1<arr.size() && arr[i1]==key){
                return i1;
            }
            if(j1>=0 && arr[j1]==key){
                return j1;
            }
            i1++;
            j1--;
            
            i++;
            j--;
        }
        return -1;
    }
};

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
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends