//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int countTriplets(vector<int> &arr, int t) {
        int c=0;
        for(int i=0;i<arr.size()-2;i++){
            int j=i+1;
            int k=arr.size()-1;
            while(j<k){
                if(arr[i]+arr[j]+arr[k]==t){
                   c++;
                   int temp=j+1;
                   while(temp<k && arr[temp]==arr[temp-1]) {
                       c++;
                       temp++;
                   }
                   
                   k--;
                    
                    
                  
                }
                else if(arr[i]+arr[j]+arr[k]>t){
                    k--;
                }
                else{
                    j++;
                }
            }
            
        }
        return c;
    }
};

//{ Driver Code Starts.

vector<int> lineArray() {
    string line;
    getline(cin, line);
    stringstream ss(line);
    vector<int> arr;
    int num;
    while (ss >> num) {
        arr.push_back(num);
    }
    return arr;
}

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr = lineArray();
        int target;
        cin >> target;
        cin.ignore();

        Solution ob;
        int res = ob.countTriplets(arr, target);
        cout << res << endl;
        cout << "~" << endl;
    }
}

// } Driver Code Ends